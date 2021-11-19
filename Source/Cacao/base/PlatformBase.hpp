// 
// Copyright camila314 & alk1m123 2021. 
//
#pragma once 

#if defined(CC_TARGET_OS_MAC)
    /**
     * Inline asm to directly jump to the appropriate destructor
     */
    #define jumpDestructor(address) asm volatile(                                           \
        "pop %%rbp \n"                                                                      \
        STR(addq CONCAT($, address), %%rax\n)                                               \
        "jmpq *%%rax" : : "r" (base)                                                        \
    );                                                                                      \
    __builtin_unreachable();      

    /**
     * Inline asm to not recurse through the destructor
     */
    #define endDestructor() asm volatile(                                                   \
        "pop %%rbp \n"                                                                      \
        "ret" : :                                                                           \
    );                                                                                      \
    __builtin_unreachable(); 

    /**
     * We need a hidden attribute for the hook classes because
     * since they have the same name in different executables their
     * global offset tables can override
     */
    #define hidden __attribute__((visibility("hidden")))

    /**
     * deprecated
     */
    #define $apply()                                       

#elif defined(CC_TARGET_OS_WIN32)
    #pragma warning( disable : 4731 ) // pop ebp warning

    /**
     * Inline asm to directly jump to the appropriate destructor
     */
    #define jumpDestructor(address) __asm {                                                 \
        __asm mov esp, ebp                                                                  \
        __asm pop ebp                                                                       \
        __asm mov eax, [base]                                                               \
        __asm add eax, address                                                              \
        __asm jmp eax                                                                       \
    };                                                                                      \
    __assume(0);

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
     * MSVC exports with hidden by default so there is no need for hidden
     */
    #define hidden 

#elif defined(CC_TARGET_OS_IPHONE)
    #define jumpDestructor(address) //
    #define endDestructor() //
#elif defined(CC_TARGET_OS_ANDROID)
    #error Android unimplemented
#else
    #error Not supported. :(
#endif
