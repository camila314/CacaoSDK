set(CMAKE_BUILD_TYPE RelWithDebugInfo)
set(CMAKE_CXX_STANDARD 17)

include_directories(
    Cacao/
    Cacao/helpers
    Cacao/base
    Cacao/old_stl
    Cacao/hook
    Cacao/hook/lilac-core/include
    Cacao/cocos/
    Cacao/cocos/cocos2dx
    Cacao/cocos/cocos2dx/include
    Cacao/cocos/cocos2dx/kazmath/include
    Cacao/cocos/extensions
)

if (DEFINED CACAO_TARGET_PLATFORM)
else()
	if(APPLE)
	    set(CACAO_TARGET_PLATFORM "MacOS")
	elseif(WIN32)
	    set(CACAO_TARGET_PLATFORM "Win32")
	else()
		message(FATAL_ERROR "Unable to detect platform, please set CACAO_TARGET_PLATFORM in the root CMake file.")
	endif()
endif()


if("${CACAO_TARGET_PLATFORM}" STREQUAL "MacOS")
    include(${CMAKE_CURRENT_LIST_DIR}/CacaoMacOS.cmake)
elseif("${CACAO_TARGET_PLATFORM}" STREQUAL "Win32")
    include(${CMAKE_CURRENT_LIST_DIR}/CacaoWin32.cmake)
elseif("${CACAO_TARGET_PLATFORM}" STREQUAL "iOS")
    include(${CMAKE_CURRENT_LIST_DIR}/CacaoiOS.cmake)
elseif("${CACAO_TARGET_PLATFORM}" STREQUAL "Android")
    include(${CMAKE_CURRENT_LIST_DIR}/CacaoAndroid.cmake)
else()
    message(FATAL_ERROR "Not supported platform, please specify from the following: MacOS, Win32, iOS, Android.")
endif()

add_subdirectory(Cacao)
if (DEFINED SOURCE_FILES)
    add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})
else()
    message(FATAL_ERROR "Please set SOURCE_FILES in the root CMake file.")
endif()
target_link_directories(${PROJECT_NAME} PRIVATE Cacao)
target_link_libraries(${PROJECT_NAME} Cacao)
