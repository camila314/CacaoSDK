// 
// Copyright camila314 & alk1m123 2021. 
//
#pragma once 

#if defined(__APPLE__) 
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
     * Enabling sounds idk really
     */
    #define $apply() void $enable() {m->enable();} static int const _enable = ($enable(), 0)

    /**
     * Basic way to make a main function without it being a main
     * function, inject is purposed for that
     */
    #define inject() $inject(); static int const _inject = ($inject(), 0); void $inject()
                                                           

#elif defined(_MSC_VER) && defined(_WIN32) 
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

    /**
     * Dllmain implement
     * also executes the inject function
     */
    #define $apply()                                                                        \
    DWORD WINAPI _thread__func_(void* hModule) {                                            \
        __if_exists(inject) {                                                               \
            inject();                                                                       \
        }                                                                                   \
        return true;                                                                        \
    }                                                                                       \
    BOOL APIENTRY DllMain(HMODULE handle, DWORD reason, LPVOID reserved) {                  \
        if (reason == DLL_PROCESS_ATTACH) {                                                 \
            CreateThread(0, 0x100, _thread__func_, handle, 0, 0);                           \
        }                                                                                   \
        return TRUE;                                                                        \
    } 

#else // ???
    #error Not implemented. 

#endif
