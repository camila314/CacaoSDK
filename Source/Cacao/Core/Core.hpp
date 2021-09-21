// 
// Copyright camila314 & alk1m123 2021. 
//
#pragma once

#include <vector>

#define FCAST(a, b) reinterpret_cast<decltype(&a)>(b)
typedef void(*func_t)();
/* The classes below are exported */
#pragma GCC visibility push(default)

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
    inline uintptr_t getAddress() {
        return address;
    }

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

    template <typename F>
    F registerHook(uintptr_t address, F function) {
        HookContainer* hook = new HookContainer(address, (func_t)function);
        mods.push_back(hook);
        return (func_t)hook->getOriginal();
    }
    
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

uintptr_t getBase();

#pragma GCC visibility pop
