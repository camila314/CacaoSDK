add_definitions(-DCC_TARGET_OS_WIN32)
set(CMAKE_SYSTEM_NAME Win32)

include_directories(
	Cacao/cocos/cocos2dx/platform/win32
	Cacao/cocos/cocos2dx/platform/third_party/win32
	Cacao/cocos/cocos2dx/platform/third_party/win32/OGLES

	Cacao/hook/lilac-meta/include
)

macro(link_prebuilts project)
	target_link_libraries(${project} 
		${Cacao_SOURCE_DIR}/cocos/cocos2dx/libcocos2d.lib
		${Cacao_SOURCE_DIR}/cocos/extensions/libExtensions.lib
	)
endmacro()

link_prebuilts(${PROJECT_NAME})

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out)
set(CMAKE_SIZEOF_VOID_P 4)
set(CMAKE_SYSTEM_PROCESSOR "i686")
set(CMAKE_GENERATOR_PLATFORM x86)
install(
	TARGETS ${PROJECT_NAME} 
	DESTINATION ${CMAKE_BINARY_DIR}/out/
)
