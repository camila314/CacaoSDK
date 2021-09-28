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
        writePM(address, byteCount, moddedBytes);
    }
    void BaseContainer::disable() {
        writePM(address, byteCount, originalBytes);
    }

    // Memory container implementation
    MemoryContainer::MemoryContainer(uintptr_t addr, size_t bytec, char* bytes) {
        CoreLog("MemoryContainer address %p, size %d\n", addr, bytec);

        // set values
        address = addr;
        byteCount = bytec;

        // read the original to the buffer
        char buf[byteCount];
        readPM(address, byteCount, reinterpret_cast<char*>(&buf));

        // set bytes
        originalBytes = buf;
        moddedBytes = bytes;
    }

    MemoryContainer::~MemoryContainer() {
        CoreLog("Bye from memory, %p", address)
    }

    HookContainer::HookContainer(uintptr_t addr, func_t function) {
        // find the last detour
        searchAddress = addr;
        address = followJMP((void*)addr);

        CoreLog("HookContainer address %p -> %p, function %p\n", addr, address, function);

        // create an original function
        duplicateFunction((void*)address, (void**)&original);
        
        // create buffers
        byteCount = 16;
        originalBytes = static_cast<char*>(malloc(byteCount));
        moddedBytes = static_cast<char*>(malloc(byteCount));
        char buf[byteCount];
        char buf2[byteCount];
        
        // set bytes
        readPM(address, byteCount, reinterpret_cast<char*>(&buf));
        memcpy(originalBytes, &buf, byteCount);

        getJMPBytes(reinterpret_cast<void*>(function), reinterpret_cast<char*>(&buf2));
        memcpy(moddedBytes, &buf2, byteCount);
    }

    func_t HookContainer::getOriginal() {
        return original;
    }

    HookContainer::~HookContainer() {
        CoreLog("Bye from hook, %p", address)

        free(originalBytes);
        free(moddedBytes);
    }

    

    void ModContainer::enable() {
        for(BaseContainer* i : mods) {
            i->enable();
        }
    }
    void ModContainer::disable() {
        for(BaseContainer* i : mods) {
            i->disable();
        }
    }

    ModContainer::ModContainer(char const* name) {
        containerName = name;
    }
    ModContainer::~ModContainer() {
        disable();
    }

    char const* ModContainer::getName() {
        return containerName;
    }
    void ModContainer::registerWrite(uintptr_t address, size_t byteCount, char* bytes) {
        MemoryContainer* write = new MemoryContainer(address, byteCount, bytes);
        mods.push_back(write);
    }

    func_t registerHook(uintptr_t address, func_t function) {
        HookContainer* hook = new HookContainer(address, function);
        mods.push_back(hook);
        return hook->getOriginal();
    }

    func_t ModContainer::getOriginal(uintptr_t addr) {
        for (BaseContainer* i : mods) {
            auto c = dynamic_cast<HookContainer*>(i);
            if (c && c->searchAddress == addr) return c->getOriginal();
        }
        throw OriginalNotFoundException();
        return nullptr;
    }

    func_t ModContainer::getOriginal(func_t func) {
        auto container = m_hooks[reinterpret_cast<uintptr_t>(func)];
        if (container) return container->getOriginal();
        throw OriginalNotFoundException();
        return nullptr;
    }

    ModInterface* ModInterface::sharedInterface() {
        if (!g_sharedInterface) {
            g_sharedInterface = new ModInterface();
        }
        return g_sharedInterface;
    }

    uintptr_t getBase() {
        return _dyld_get_image_vmaddr_slide(0)+0x100000000;
    }

}
