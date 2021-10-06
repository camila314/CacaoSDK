// 
// Copyright camila314 & alk1m123 2021. 
//
#pragma once

#include <stdint.h>

uintptr_t getBase();
inline uintptr_t const base = getBase();

#include <Core/Core.hpp>
#include <Header.hpp>

#ifndef CAC_PROJ_NAME
#define CAC_PROJ_NAME "Default Cacao Project"
#endif

inline ModContainer* const m = new ModContainer(CAC_PROJ_NAME);

/**
 * "A destructor is used to destroy objects of its class type. 
 *  The address of a destructor shall not be taken."
 *  - C++ standard 12.4.2
 * 
 * Therefore, we shall not take the destructor of the class and 
 *  replace it with an empty function.  ~alk
 *
 * The destructor is at the address vtable + 0x8, so we do that
 */
template <typename V>
inline uintptr_t extract_destructor(V vtable) {
    return *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(vtable)+0x8);
};

/**
 * For some reason converting a virtual function address to 
 *  uintptr_t the value increases by 1 so we need to decrease
 *  by 1 to make it align 
 */
template <typename F, typename V>
inline uintptr_t extract_virtual(V vtable, F func) { 
    return *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(vtable)+reinterpret_cast<uintptr_t&>(func)-0x1);
};


/**
 * it’s actually kinda sick because you can use the ref cast 
 *  thingy to convert almost anything to anything else  ~camila
 * 
 * This is the kind-of-hack to convert the member function pointers
 * to uintptr_t, which is actually usable
 */
template <typename F>
inline uintptr_t extract(F func) {
    return reinterpret_cast<uintptr_t&>(func);
};

// Just in case if we ever need to add shared implementations
class $CacBase {
public:
    virtual ~$CacBase() {}
};

/**
 * Enabling sounds idk really
 */
#define $apply(...) void $enable() {m->enable();} static int const _enable = ($enable(), 0)

/**
 * We need a hidden attribute for the hook classes because
 * since they have the same name in different executables their
 * global offset tables can override
 */
#define hidden __attribute__((visibility("hidden")))

/**
 * Basic way to make a main function without it being a main
 * function, inject is purposed for that
 */
#define inject() $inject(); static int const _inject = ($inject(), 0); void $inject()

/**
 * Low level macro concatenation, needs 2 levels of indirection 
 * for some reason
 */
#define CONCAT_(x, y) x##y
#define CONCAT(x, y) CONCAT_(x, y)

/**
 * Main class implementation, it has the structure
 * 
 * class __attribute__(("hidden")) $hook0: public $MenuLayer<$hook0> {
 * public:
 *     // code stuff idk
 * };
 * 
 * I tried to make the macro as verbose as it can be but
 * I am bad at this stuff
 */
#define REDIRECT__(base, derived) hidden derived: public base<derived>
#define REDIRECT_(base, counter) REDIRECT__(base, CONCAT($hook, counter))
#define REDIRECT(base) REDIRECT_($##base, __COUNTER__)

/**
 * Interfaces for the class implementation
 * 
 * $redirect is for when you don't need the name of the class
 * class $redirect(MenuLayer) {};
 * 
 * $implement is for when you need the name of the class
 * class $implement(MenuLayer, MyMenuLayerInterface) {};
 */
#define $redirect(base) REDIRECT_($##base, __COUNTER__)
#define $implement(base, derived) REDIRECT__(base, derived)
