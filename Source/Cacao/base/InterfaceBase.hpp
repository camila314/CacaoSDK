// 
// Copyright camila314 & alk1m123 2021. 
//
#pragma once

#include <Base.hpp>
#include <MacroBase.hpp>
#include <PlatformBase.hpp>

#include <Header.hpp>
#include <Cacao.hpp>
#include <Core.hpp>

#include <FunctionBase.hpp>

#define modContainer ModInterface::container(STR(PROJECT_NAME))

// Just in case if we ever need to add shared implementations
class InterfaceBase {
public:
	void _apply() {}
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
 * bool $hook0Apply = Cacao::kinterface::$MenuLayer<$hook0>::_apply();
 * struct __attribute__(("hidden")) $hook0: public Cacao::kinterface::$MenuLayer<$hook0> {
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
#define REDIRECT__(base, derived) REDIRECT___(Cacao::kinterface::$##base, derived)
#define REDIRECT_(base, counter) REDIRECT__(base, CONCAT($hook, counter))
#define REDIRECT(base) REDIRECT_(base, __COUNTER__)

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
