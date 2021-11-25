// 
// Copyright camila314 & alk1m123 2021. 
//
#pragma once 

#if defined(_MSC_VER)
    /**
     * MSVC exports with hidden by default so there is no need for hidden
     */
    #define hidden
#else
    /**
     * We need a hidden attribute for the hook classes because
     * since they have the same name in different executables their
     * global offset tables can override
     */
    #define hidden __attribute__((visibility("hidden")))
#endif

#if defined(CC_TARGET_OS_MAC)
    
    /**
     * Inline asm to not recurse through the destructor
     */
    #define endDestructor() asm volatile(                                                   \
        "pop %%rbp \n"                                                                      \
        "ret" : :                                                                           \
    );                                                                                      \
    __builtin_unreachable(); 

    /**
     * Inline asm to directly jump to the appropriate destructor
     */
    #define jumpDestructor(address) asm volatile(                                           \
        "mov %[input_base], %%rax \n"                                                       \
        "addq %[input_address], %%rax\n"                                                    \
        "callq *%%rax" : :                                                                  \
        [input_base] "r" (base), [input_address] "r" (address##l)                           \
    );                                                                                      \
    endDestructor();      
                                   

#elif defined(CC_TARGET_OS_WIN32)
    #pragma warning( disable : 4731 ) // pop ebp warning

    /**
     * Inline asm to not recurse through the destructor
     */
    #define endDestructor() __asm {                                                         \
        __asm mov esp, ebp                                                                  \
        __asm pop ebp                                                                       \
        __asm ret                                                                           \
    };                                                                                      \
    __assume(0);

    /**
     * Inline asm to directly jump to the appropriate destructor
     */
    #define jumpDestructor(address) __asm {                                                 \
        __asm mov eax, [base]                                                               \
        __asm add eax, address                                                              \
        __asm call eax                                                                      \
    };                                                                                      \
    endDestructor();

#elif defined(CC_TARGET_OS_IPHONE)

    /**
     * Inline asm to not recurse through the destructor
     */
    #define endDestructor() asm volatile(                                                   \
        "ADD sp, sp, #0x10\n"                                                               \
        "RET\n" : :                                                                         \
    );                                                                                      \
    __builtin_unreachable(); 

    /**
     * Inline asm to directly jump to the appropriate destructor
     */
    #define jumpDestructor(address) asm volatile(                                           \
        "ADD x0, %[input_base], %[input_address] \n"                                        \
        "BLR x0 \n" : :                                                                     \
        [input_base] "r" (base), [input_address] "r" (address)                              \
    );                                                                                      \
    endDestructor();      

#elif defined(CC_TARGET_OS_ANDROID)

    // dlsym
    #include <dlfcn.h>

    /**
     * Inline asm to not recurse through the destructor
     */
    #define endDestructor() asm volatile(                                                   \
        "ADD sp, #0xc \n"                                                                   \
        "BX lr \n" : :                                                                      \
    );                                                                                      \
    __builtin_unreachable(); 
    
    /**
     * Inline asm to directly jump to the appropriate destructor
     */
    #define jumpDestructor(address) asm volatile(                                           \
        "ADD r0, %[input_base], %[input_address] \n"                                        \
        "BLR r0 \n" : :                                                                     \
        [input_base] "r" (base), [input_address] "r" (address)                              \
    );                                                                                      \
    endDestructor();      

#else
    #error Not supported. :(
#endif
