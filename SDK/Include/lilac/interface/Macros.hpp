#pragma once

// Disable Dll-Interface warnings
#pragma warning(disable: 4251)

#if _WIN32
#define LILAC_API extern "C" __declspec(dllexport)
#else
#define LILAC_API
#endif