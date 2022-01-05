// 
// Copyright camila314 & alk1m123 2022. 
//
#pragma once 

#include <cstddef>
#include <stdint.h>
#include <gdstdlib.hpp>
#include <MacroBase.hpp>

CACAODLL uintptr_t getBase();
inline uintptr_t const base = getBase();

#define CACAO_VERSION "3.4.0"

