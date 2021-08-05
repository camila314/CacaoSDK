set(SDK_LOCATION $ENV{HOME}/Desktop/Storage/SDK/MacOSX10.7.sdk/) # keep pls, its for me

cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(CacTemplate VERSION 0.1.0 LANGUAGES CXX)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated -std=c++17 -DCC_TARGET_OS_MAC -mmacosx-version-min=10.7 -fms-extensions -Xlinker --no-demangle")
set(CMAKE_OSX_SYSROOT ${SDK_LOCATION})

include_directories(
	Cacao/
	Cacao/include
	Cacao/include/cocos2dx
	Cacao/include/cocos2dx/include
	Cacao/include/cocos2dx/kazmath/include
	Cacao/include/cocos2dx/platform/mac
	Cacao/include/cocos2dx/platform/third_party/mac
	Cacao/include/cocos2dx/platform/third_party/mac/OGLES
	Cacao/include/cocos2dext
	Cacao/include/cocos2dx/custom/Sprites/CCMenuItemSpriteExtra
)

add_subdirectory(Cacao)

add_library(${PROJECT_NAME} SHARED main.cpp)
target_link_directories(${PROJECT_NAME} PRIVATE Cacao)
target_link_libraries(${PROJECT_NAME} Cacao)

add_custom_command(
	TARGET  ${PROJECT_NAME}
    COMMAND sudo osxinj \"Geometry Dash\" *.dylib || true
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Injecting"
)
