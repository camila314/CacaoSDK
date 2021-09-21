#include <iostream>
#include <algorithm>
#include "GDML.hpp"

vector<ModContainer*> ModContainer::containers;

BaseContainer::~BaseContainer() {
}

MemoryContainer::MemoryContainer(uintptr_t addr, size_t bytec, char* bytes) {
    address = addr;
    byteCount = bytec;
    char buf[byteCount];
    readPM(address, byteCount, reinterpret_cast<char*>(&buf));
    originalBytes = buf;
    moddedBytes = bytes;
}
MemoryContainer::~MemoryContainer() {
}

HookContainer::HookContainer(uintptr_t addr, func_t function) {
    address = addr;

    dupe((void*)addr, (void**)&original);
    
    //dupe(reinterpret_cast<void*>(addr), reinterpret_cast<void**>(&original));
    byteCount = 16;
    
    originalBytes = static_cast<char*>(malloc(byteCount));
    moddedBytes = static_cast<char*>(malloc(byteCount));
    
    char buf[byteCount];
    
    readPM(address, byteCount, reinterpret_cast<char*>(&buf));
    memcpy(originalBytes, &buf, byteCount);
    
    char buf2[byteCount];
    _get_jmp_bytes(reinterpret_cast<void*>(function), reinterpret_cast<char*>(&buf2));
    memcpy(moddedBytes, &buf2, byteCount);
    
    
    
}

func_t HookContainer::getOriginal() {
    return original;
}

HookContainer::~HookContainer() {
}

void BaseContainer::enable() {
    writePM(address, byteCount, moddedBytes);
}
void BaseContainer::disable() {
    writePM(address, byteCount, originalBytes);
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
