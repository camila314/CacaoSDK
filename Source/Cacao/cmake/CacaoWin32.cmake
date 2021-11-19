include_directories(
    Cacao/base/target/win32
    Cacao/cocos/cocos2dx/platform/win32
    Cacao/cocos/cocos2dx/platform/third_party/win32
    Cacao/cocos/cocos2dx/platform/third_party/win32/OGLES
)
target_link_libraries(${PROJECT_NAME} 
    Cacao/cocos/cocos2dx/libcocos2d.lib
    Cacao/cocos/extensions/libExtensions.lib
)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out)
set(CMAKE_SIZEOF_VOID_P 4)
set(CMAKE_SYSTEM_PROCESSOR "i686")
set(CMAKE_GENERATOR_PLATFORM x86)
install(
    TARGETS ${PROJECT_NAME} 
    DESTINATION ${CMAKE_BINARY_DIR}/out/
)
