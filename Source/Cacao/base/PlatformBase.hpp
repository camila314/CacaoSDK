// 
// Copyright camila314 & alk1m123 2022. 
//
#pragma once 

#if defined(_MSC_VER)
	/**
	 * MSVC exports with hidden by default so there is no need for hidden
	 */
	#define hidden
	#define dllexport __declspec(dllexport)
	#define dupable __forceinline

#else
	/**
	 * We need a hidden attribute for the hook classes because
	 * since they have the same name in different executables their
	 * global offset tables can override
	 */
	#define hidden __attribute__((visibility("hidden")))
	#define dllexport 
	#define dupable __attribute__((always_inline))
#endif


#if defined(CC_TARGET_OS_ANDROID)
	// dlsym
	#include <dlfcn.h>

	#include <android/log.h>
#endif
