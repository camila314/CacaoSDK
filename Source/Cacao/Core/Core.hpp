// 
// Copyright camila314 & alk1m123 2021. 
//
#pragma once

#include "Platform.hpp"

namespace Cacao::core {

    #define CoreLog(format, ...) fprintf(stdout, "%s:%d:\nlog: " format"\n", __FILE__, __LINE__, ##__VA_ARGS__)

    typedef void(*func_t)();

    //
    // Base container type for hooks and patches
    //
    class BaseContainer {
    private:
        uintptr_t address;
        char* originalBytes;
        char* moddedBytes;
        
    public:

        // Destructs the container
        virtual ~BaseContainer();

        // Enables the specific base container
        virtual void enable();

        // Disables the specific base container
        virtual void disable();

        // Gets the address of the specific base container
        uintptr_t getAddress();

        friend class ModContainer;
    };

    class MemoryContainer : public BaseContainer {
    private:
        size_t byteCount;

    public:

        // Constructs a memory container for the address with bytes of byteCount long
        MemoryContainer(uintptr_t address, size_t byteCount, char* bytes);

        // Destructs the specific memory container
        virtual ~MemoryContainer();
    };

    class HookContainer : public BaseContainer {
    private:
        func_t original; 
        uintptr_t searchAddress;

    public:

        // Constructs a hook container for the address with function
        HookContainer(uintptr_t address, func_t function);

        // Destructs the specific hook container
        virtual ~HookContainer();

        // Enables the specific hook container
        virtual void enable();

        // Disables the specific hook container
        virtual void disable();

        // Gets the original function for the specified hook
        func_t getOriginal();
    };


    //
    // Mod container that contains all the base containers
    //
    class ModContainer {
    private:
        std::map<uintptr_t, HookContainer*> m_hooks;
        std::vector<BaseContainer*> m_mods;
        std::string m_name;
        uintptr_t m_hash;

    public:
        // Constructs the container with a given name
        ModContainer(std::string name);

        // Destructs the container
        virtual ~ModContainer();

        // Enables all the hooks and writes registered to the container
        void enable();

        // Disables all the hooks and writes registered to the container
        void disable();

        // Registers a write of bytes to the address that is byteCount long
        void registerWrite(uintptr_t address, size_t byteCount, char* bytes);

        // Registers a function hook to the address
        func_t registerHook(uintptr_t address, func_t function); 

        // Gets the original function from the specified address
        __attribute__((deprecated("Replaced by getting the original function by the hooked function pointer, which doesn't break with multiple hooks on the same address"))) 
        func_t getOriginal(uintptr_t address);

        // Gets the original function from the hooking function
        func_t getOriginal(func_t func);

        // The getter for the base containers
        std::vector<BaseContainer*> getMods();

        // The getter for the name of the container
        std::string getName();

        // Implemented for the set
        bool operator<(const ModContainer* other) const;
    };

    // Shared interface container that holds all the mod containers
    class ModInterface {
    private:
        static ModInterface* __attribute__((weak)) g_sharedInterface;

        

    public:
        // Shared getter for the interface
        static ModInterface* sharedInterface();


    }

    struct OriginalNotFoundException : public exception {
        const char* what() const throw() {
            return "Cannot find the original address of this function";
        }
    };
}

using ModContainer = Cacao::core::ModContainer;

using ModInterface = Cacao::core::ModInterface;
