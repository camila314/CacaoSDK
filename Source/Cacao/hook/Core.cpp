// 
// Copyright camila314 & alk1m123 2021. 
//
#include "Core.hpp"

namespace Cacao::core {

    // Base container implementation
    BaseContainer::~BaseContainer() {
        CoreLog("Bye from base, %p", address)
    }

    void BaseContainer::enable() {
    }

    void BaseContainer::disable() {
    }

    uintptr_t BaseContainer::getAddress() {
        return m_address;
    }

    // Memory container implementation
    MemoryContainer::MemoryContainer(uintptr_t addr, size_t bytec, char* bytes) {
        CoreLog("MemoryContainer address %p, size %d\n", addr, bytec);

        // set values
        m_address = addr;
        m_byteCount = bytec;

        // read the original to the buffer
        char* buf = new char[m_byteCount];
        // readPM(address, byteCount, reinterpret_cast<char*>(&buf));

        // set bytes
        m_originalBytes = buf;
        m_moddedBytes = bytes;
    }

    void MemoryContainer::enable() {
        lilac::Memory::write((void*)m_address, (void*)m_moddedBytes, m_byteCount);
    }
    void MemoryContainer::disable() {
        lilac::Memory::write((void*)m_address, (void*)m_originalBytes, m_byteCount);
    }


    MemoryContainer::~MemoryContainer() {
        CoreLog("Bye from memory, %p", address)
        free(m_originalBytes);
    }

    HookContainer::HookContainer(uintptr_t address, func_t function) {
        m_address = address;
        m_function = function;
    }

    HookContainer::~HookContainer() {
        CoreLog("Bye from hook, %p", address)
        lilac::Hooks::remove(m_handle);
    }

    void HookContainer::enable() {
        m_handle = lilac::Hooks::add((void*)m_address, (void*)m_function);
    }
    void HookContainer::disable() {
        lilac::Hooks::remove(m_handle);
    }

    void ModContainer::enable() {
        for(BaseContainer* i : m_mods) {
            i->enable();
        }
    }
    void ModContainer::disable() {
        for(BaseContainer* i : m_mods) {
            i->disable();
        }
    }

    ModContainer::ModContainer(std::string name) {
        m_name = name;
    }
    ModContainer::~ModContainer() {
        disable();
    }

    std::vector<BaseContainer*> ModContainer::getMods() {
        return m_mods;
    }

    std::string ModContainer::getName() {
        return m_name;
    }

    void ModContainer::registerWrite(uintptr_t address, size_t byteCount, char* bytes) {
        MemoryContainer* write = new MemoryContainer(address, byteCount, bytes);
        m_mods.push_back(write);
    }

    void ModContainer::registerHook(uintptr_t address, func_t function) {
        HookContainer* hook = new HookContainer(address, function);
        m_mods.push_back(hook);
    }

    void ModContainer::registerHook(uintptr_t address, uintptr_t function) {
        registerHook(address, (func_t)function);
    }

    void ModContainer::registerHookEnable(uintptr_t address, func_t function) {
        registerHook(address, function);
        m_mods.back()->enable();
    }

    void ModContainer::registerHookEnable(uintptr_t address, uintptr_t function) {
        registerHook(address, (func_t)function);
        m_mods.back()->enable();
    }

}

#if defined(CC_TARGET_OS_MAC)
    #include <mach-o/dyld.h>
#elif defined(CC_TARGET_OS_WIN32)
    #include <windows.h>
#elif defined(CC_TARGET_OS_IPHONE)
    #error Core.cpp
#elif defined(CC_TARGET_OS_ANDROID)
    #error Core.cpp
#else
   #error Not supported. 
#endif
uintptr_t getBase() {
    #if defined(CC_TARGET_OS_MAC)
        return _dyld_get_image_vmaddr_slide(0)+0x100000000;
    #elif defined(CC_TARGET_OS_WIN32)
        return reinterpret_cast<uintptr_t>(GetModuleHandle(0));
    #elif defined(CC_TARGET_OS_IPHONE)
        #error Core.cpp
    #elif defined(CC_TARGET_OS_ANDROID)
        #error Core.cpp
    #else
        #error Not supported.
    #endif
}
