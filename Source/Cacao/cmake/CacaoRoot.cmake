set(CMAKE_BUILD_TYPE RelWithDebugInfo)
set(CMAKE_CXX_STANDARD 17)


include_directories(
    Cacao/
    Cacao/helpers
    Cacao/base
    Cacao/old_stl
    Cacao/hook
    Cacao/hook/lilac-core/include
    Cacao/cocos/cocos-headers
    Cacao/cocos/cocos-headers/cocos2dx
    Cacao/cocos/cocos-headers/cocos2dx/include
    Cacao/cocos/cocos-headers/cocos2dx/kazmath/include
    Cacao/cocos/cocos-headers/extensions
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
    include(${CMAKE_CURRENT_LIST_DIR}/CacaoMac.cmake)
elseif("${CACAO_TARGET_PLATFORM}" STREQUAL "Win32")
    include(${CMAKE_CURRENT_LIST_DIR}/CacaoWin32.cmake)
elseif("${CACAO_TARGET_PLATFORM}" STREQUAL "iOS")
    include(${CMAKE_CURRENT_LIST_DIR}/CacaoiOS.cmake)
else()
    message(FATAL_ERROR "Platform '${CACAO_TARGET_PLATFORM}' is not supported")
endif()

add_subdirectory(Cacao)

add_library(${PROJECT_NAME} SHARED main.cpp)
target_link_directories(${PROJECT_NAME} PRIVATE Cacao)
target_link_libraries(${PROJECT_NAME} Cacao)