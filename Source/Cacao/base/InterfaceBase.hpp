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
#define $implement(base, derived) REDIRECT__($##base, derived)
