//
//  GDML.cpp
//  GDML
//
//  Created by Full Name on 7/17/20.
//  Copyright © 2020 camila314. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include "GDML.hpp"

vector<ModContainer*> ModContainer::containers;

BaseContainer::~BaseContainer() {
#ifdef CAC_VERBOSE
    std::cout << "bye " << (void*)address << endl;
#endif
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
#ifdef CAC_VERBOSE
    std::cout << "bye from memory " << (void*)address << endl;
#endif
}

HookContainer::HookContainer(uintptr_t addr, func_t function) {
#ifdef CAC_VERBOSE
    printf("HookContainer address %p, function %p\n", (void*)addr, function);
#endif
    
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
#ifdef CAC_VERBOSE
    std::cout << "bye from hook " << (void*)address << endl;
#endif
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

ModContainer::ModContainer(char const* name) {
    containerName = name;
    ModContainer::containers.push_back(this);
}
ModContainer::~ModContainer() {
    disable();
    ModContainer::containers.erase(std::remove(ModContainer::containers.begin(), ModContainer::containers.end(), this), ModContainer::containers.end());
}

char const* ModContainer::getName() {
    return containerName;
}
void ModContainer::registerWrite(uintptr_t address, size_t byteCount, char* bytes) {
    MemoryContainer* write = new MemoryContainer(address, byteCount, bytes);
    mods.push_back(write);
}

func_t ModContainer::getOriginal(uintptr_t addr) {
    
    for(BaseContainer* i : mods) {
        if(i->address == addr) {
            return dynamic_cast<HookContainer*>(i)->getOriginal();
        }
    }
    throw OriginalNotFoundException();
    return NULL;
}

uintptr_t getBase() {
    return _dyld_get_image_vmaddr_slide(0)+0x100000000;
}
