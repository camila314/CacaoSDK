#pragma once

#ifdef _EXPORTING_LILAC_MOD
    #define MOD_DLL     __declspec(dllexport)
#else
    #define MOD_DLL     __declspec(dllimport)
#endif
