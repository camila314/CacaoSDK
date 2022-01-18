#pragma once

#include "interface/ctypes.h"

#ifdef __cplusplus
extern "C" {
#else
#include <stdbool.h>
#include <stddef.h>
#endif

void LILAC_C_DLL lilac_mod_log(void* mod, const char* message);

bool LILAC_C_DLL lilac_mod_add_hook(void* mod, void* address, void* detour);

bool LILAC_C_DLL lilac_get_last_error(char* buffer, size_t bufferSize);

#ifdef __cplusplus
}
#endif
