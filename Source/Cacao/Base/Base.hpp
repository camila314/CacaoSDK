#pragma once

#include <stdint.h>

uintptr_t getBase();
inline uintptr_t const base = getBase();
