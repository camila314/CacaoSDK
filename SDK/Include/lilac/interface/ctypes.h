#pragma once

#define LILAC_C_API __declspec(dllexport) __stdcall

// Set dllexport/dllimport to lilac classes & functions
#ifdef LILAC_EXPORTING
    #define LILAC_C_DLL  __declspec(dllexport)
#else
    #define LILAC_C_DLL  __declspec(dllimport)
#endif
