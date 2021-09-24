// 
// Copyright camila314 & alk1m123 2021. 
//
#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include "Route.hpp"


#define CoreLog(format, ...) fprintf(stdout, "%s:%d:\nlog: " format"\n", __FILE__, __LINE__, ##__VA_ARGS__)

#define FCAST(a, b) reinterpret_cast<decltype(&a)>(b)
typedef void(*func_t)();
/* The classes below are exported */
#pragma GCC visibility push(default)

uintptr_t getBase();

//
// Base container type for hooks and patches
//
class BaseContainer {
private:
    uintptr_t address;
    size_t byteCount;
    char* originalBytes;
    char* moddedBytes;
    
public:
    virtual ~BaseContainer();
    void enable();
    void disable();
    uintptr_t getAddress();

    friend class ModContainer;
};

class MemoryContainer : public BaseContainer{
public:
    MemoryContainer(uintptr_t address, size_t byteCount, char* bytes);
    ~MemoryContainer();
};

class HookContainer : public BaseContainer {
private:
    func_t original; 

public:
    HookContainer(uintptr_t address, func_t function);
    func_t getOriginal();
    ~HookContainer();
};

//
// Mod container that contains all the base containers
//
class ModContainer {
private:
    std::vector<BaseContainer*> mods;
    char const* containerName;

public:
    ModContainer(char const* name);
    ~ModContainer();
    void enable();
    void disable();
    void registerWrite(uintptr_t address, size_t byteCount, char* bytes);

    func_t registerHook(uintptr_t address, func_t function); 
    func_t getOriginal(uintptr_t address);

    char const* getName();
    std::vector<BaseContainer*> getMods();

};

struct OriginalNotFoundException : public exception {
    const char* what() const throw() {
        return "Cannot find the original address of this function";
    }
};

struct ModNotFoundException : public exception {
    const char* what() const throw() {
        return "Cannot find the mod container given the name";
    }
};

#pragma GCC visibility pop
