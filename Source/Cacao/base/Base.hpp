// 
// Copyright camila314 & alk1m123 2021. 
//
#pragma once 

#include <cstddef>
#include <stdint.h>
#include <gdstdlib.hpp>

uintptr_t getBase();
inline uintptr_t const base = getBase();

#define CACAO_VERSION "3.0.0"

