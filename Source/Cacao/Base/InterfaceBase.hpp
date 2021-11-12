// 
// Copyright camila314 & alk1m123 2021. 
//
#pragma once

#include <Base/Base.hpp>
#include <Core/Core.hpp>
#include <Base/MacroBase.hpp>
#include <Base/FunctionBase.hpp>

#include <Header.hpp>
#include <Cacao.hpp>

#ifndef CAC_PROJ_NAME
#define CAC_PROJ_NAME "Default Cacao Project"
#endif

inline ModContainer* const m = new ModContainer(CAC_PROJ_NAME);



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
 * Get type of a function
 */
#define getReturnOf(Class, Function, ...) decltype(std::declval<Class>().Function(__VA_ARGS__))

/**
 * 
 */
// template <class F>
// struct GetReturn {
//     typedef typename F::something_made_up type;

// };

// template<typename R, typename T, typename ...Ps>
// struct GetReturn<R(T::*)(Ps...) const> {
//     using type = R;
// };

// template<typename R, typename T, typename ...Ps>
// struct GetReturn<R(T::*)(Ps...)> {
//     using type = R;
// };

// template<typename R, typename ...Ps>
// struct GetReturn<R(*)(Ps...)> {
//     using type = R;
// };


// template<typename C, typename R, typename T, typename ...Ps>
// struct GetDerived {
//     using type = R(D::*)(Ps...);
// };

// template<typename C, typename R, typename T, typename ...Ps>
// struct GetStatic {
//     using type = R(*)(Ps...);
// };


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
 * (cant be used because using end implement now)
 * 
 * $implement is for when you need the name of the class
 * class $implement(MenuLayer, MyMenuLayerInterface) {};
 */
#define $redirect(base) REDIRECT_($##base, __COUNTER__)
#define $implement(base, derived) REDIRECT__($##base, derived)

/**
 * My solution to the destructor problem
 * another syntax change but i couldn't care less
*/
#define endImplement(derived) ; static int const CONCAT(_, derived) = (derived::apply(), 0);
