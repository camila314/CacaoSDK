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
    include_directories(
        Cacao/api
        Cacao/cocos/cocos-headers/cocos2dx/platform/mac
        Cacao/cocos/cocos-headers/cocos2dx/platform/third_party/mac
        Cacao/cocos/cocos-headers/cocos2dx/platform/third_party/mac/OGLES
    )
    
    add_definitions(-DCC_TARGET_OS_MAC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated ")

    add_custom_command(
        COMMAND sudo osxinj \"Geometry Dash\" *.dylib || true
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Inject target ${PROJECT_NAME}"
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/run0
    )

    add_custom_target(
        Inject ALL
        DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/run0
    )

    add_dependencies(Inject ${PROJECT_NAME})

elseif("${CACAO_TARGET_PLATFORM}" STREQUAL "Win32")

else()
endif()

add_subdirectory(Cacao)

add_library(${PROJECT_NAME} SHARED main.cpp)
target_link_directories(${PROJECT_NAME} PRIVATE Cacao)
target_link_libraries(${PROJECT_NAME} Cacao)