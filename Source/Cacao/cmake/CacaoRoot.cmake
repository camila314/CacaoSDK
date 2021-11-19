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
    include(${CMAKE_CURRENT_LIST_DIR}/CacaoMac.cmake)
elseif("${CACAO_TARGET_PLATFORM}" STREQUAL "Win32")
    include(${CMAKE_CURRENT_LIST_DIR}/CacaoWin32.cmake)
else()
endif()

add_subdirectory(Cacao)
if (DEFINED SOURCE_FILES)
    add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})
else()
    add_library(${PROJECT_NAME} SHARED main.cpp)
endif()
target_link_directories(${PROJECT_NAME} PRIVATE Cacao)
target_link_libraries(${PROJECT_NAME} Cacao)
