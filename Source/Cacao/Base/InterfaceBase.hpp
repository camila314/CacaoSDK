// 
// Copyright camila314 & alk1m123 2021. 
//
#pragma once

#include <stdint.h>

extern uintptr_t getBase();
inline uintptr_t const base = getBase();

#include <GDML/GDML.hpp>
#include <Header.hpp>

#ifndef CAC_PROJ_NAME
#define CAC_PROJ_NAME "Default Cacao Project"
#endif

inline ModContainer* const m = new ModContainer(CAC_PROJ_NAME);

inline bool _lock = false;

// "A destructor is used to destroy objects of its class type. The address of a destructor shall not be taken."
// - C++ standard 12.4.2
// Therefore, we shall not take the destructor of the class and replace it with an empty function.  ~alk
//
// 0x18 from 0x10 + 0x8, the vtable pointer is offset by 0x10 and the destructor is at the address vtable + 0x8
//
// update: vtable is no longer 0x10 off
template <typename V>
inline uintptr_t extract_destructor(V vtable) {
    return *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(vtable)+0x8);
};

// Even more advanced this time
//
// 0xf is from 0x10 - 1, the vtable pointer is offset by 0x10 and -1 comes from the address of a virtual func being 1 off
//
// update: vtable is no longer 0x10 off
template <typename F, typename V>
inline uintptr_t extract_virtual(V vtable, F func) { 
    return *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(vtable)+reinterpret_cast<uintptr_t&>(func)-0x1);
};

// it’s actually kinda sick because you can use the ref cast thingy to convert almost anything to anything else  ~camila
template <typename F>
inline uintptr_t extract(F func) {
    return reinterpret_cast<uintptr_t&>(func);
};

// Just in case if we ever need to add shared implementations
class $CacBase {
public:
    virtual ~$CacBase() {}
};

// deprecated
#define $apply(...) void $enable() {m->enable();} static int const _enable = ($enable(), 0)

// repurposed
#define dupable inline __attribute__((always_inline))

#define inject() $inject(); static int const _inject = ($inject(), 0); void $inject()

#define CONCAT_(x, y) x##y
#define CONCAT(x, y) CONCAT_(x, y)

#define REDIRECT__(base, derived) derived: public base<derived>
#define REDIRECT_(base, counter) REDIRECT__(base, CONCAT($hook, counter))
#define REDIRECT(base) REDIRECT_($##base, __COUNTER__)

#define $redirect(base) REDIRECT_($##base, __COUNTER__)
#define $implement(base, derived) REDIRECT__(base, derived)
