// 
// Copyright camila314 & alk1m123 2022. 
//
#pragma once

#include <Base.hpp>
#include <MacroBase.hpp>
#include <PlatformBase.hpp>

#include <Header.hpp>
#include <Cacao.hpp>
#include <Core.hpp>

#include <FunctionBase.hpp>

#include <type_traits>


#define modContainer (ModInterface::container(STR(PROJECT_NAME)))

// Just in case if we ever need to add shared implementations
class InterfaceBase {
public:
	void _apply() {}
};

template <typename T, typename F>
inline T base_cast(F obj) {
	return static_cast<T>(dynamic_cast<void*>(obj));
}

template <typename F, typename T>
struct add_qualifier {
    using type = F;
};

template <typename R, typename C, typename T, typename ...Ps>
struct add_qualifier<R(C::*)(Ps...), const T> {
    using type = R(C::*)(Ps...) const;
};

template <typename R, typename C, typename T, typename ...Ps>
struct add_qualifier<R(C::*)(Ps...), T&> {
    using type = R(C::*)(Ps...) &;
};

template <typename R, typename C, typename T, typename ...Ps>
struct add_qualifier<R(C::*)(Ps...), T&&> {
    using type = R(C::*)(Ps...) &&;
};

template <typename F, typename D>
struct replace_member {
	using type = F;
};

template <typename R, typename C, typename ...Ps, typename D>
struct replace_member<R(C::*)(Ps...), D> {
	using type = R(D::*)(Ps...);
};


/**
 * Basic way to make a main function without it being a main
 * function, inject is purposed for that
 */
#define inject() $inject(); static int const _inject = ($inject(), 0); void $inject()


/**
 * Main class implementation, it has the structure
 * 
 * class $hook0;
 * bool $hook0Apply = Cacao::interfaces::$MenuLayer<$hook0>::_apply();
 * struct __attribute__(("hidden")) $hook0: public Cacao::interfaces::$MenuLayer<$hook0> {
 *     // code stuff idk
 * };
 * 
 * I tried to make the macro as verbose as it can be but
 * I am bad at this stuff
 */


#define PREDECLARE(derived) derived;
#define APPLY(base, derived) bool derived##Apply = base<derived>::_apply();
#define DECLARE(base, derived) struct hidden derived: public base<derived>

#define REDIRECT___(base, derived) PREDECLARE(derived) APPLY(base, derived) DECLARE(base, derived)
#define REDIRECT__(base, derived) REDIRECT___(Cacao::interfaces::$##base, derived)
#define REDIRECT_(base) REDIRECT__(base, CONCAT(hook, CONCAT(__LINE__, __COUNTER__)))
#define REDIRECT(base) REDIRECT_(base)

/**
 * Interfaces for the class implementation
 * 
 * $redirect is for when you don't need the name of the class
 * class $redirect(MenuLayer) {};
 * 
 * $implement is for when you need the name of the class
 * class $implement(MenuLayer, MyMenuLayerInterface) {};
 */
#define $redirect(base) REDIRECT(base)
#define $implement(base, derived) REDIRECT__(base, derived)

/**
 * Or just use this lol
 */
#define CRTP1(base) $redirect(base)
#define CRTP2(base, derived) $implement(base, derived)
#define $(...) CONCAT(CRTP, NUMBER_OF_ARGS(__VA_ARGS__))(__VA_ARGS__)
