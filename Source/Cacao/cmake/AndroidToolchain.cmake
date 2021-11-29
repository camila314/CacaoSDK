if (DEFINED CACAO_ANDROID_NDK)
elseif(NOT $ENV{CACAO_ANDROID_NDK} STREQUAL "")
    set(CACAO_ANDROID_NDK $ENV{CACAO_ANDROID_NDK})
else()
    message(FATAL_ERROR "Please set CACAO_ANDROID_NDK in the root CMake file.")
endif()

# Set android
set(ANDROID_NDK ${CACAO_ANDROID_NDK})
set(ANDROID_PLATFORM 21)
set(ANDROID_STL c++_static)

# Set toolchain
set(CMAKE_TOOLCHAIN_FILE ${CACAO_ANDROID_NDK}/build/cmake/android.toolchain.cmake)

# Set cmake android
set(CMAKE_ANDROID_NDK ${CACAO_ANDROID_NDK})
set(CMAKE_SYSTEM_VERSION 21)
set(CMAKE_ANDROID_STL_TYPE c++_static)
set(CMAKE_SYSTEM_NAME Android)
set(CMAKE_ANDROID_ARCH_ABI armeabi-v7a)
set(CMAKE_ANDROID_ARM_MODE ON)
set(CMAKE_ANDROID_ARM_NEON ON)