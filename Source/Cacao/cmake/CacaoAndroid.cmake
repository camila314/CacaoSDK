add_definitions(-DANDROID)
add_definitions(-DCC_TARGET_OS_ANDROID)




set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fms-extensions -Xlinker --no-demangle -Wno-deprecated -m32 ")


target_link_libraries(${PROJECT_NAME} log android EGL GLESv2)


include_directories(
    Cacao/cocos/cocos2dx/platform/android
)

message(${CMAKE_CURRENT_SOURCE_DIR}/Cacao/cocos/cocos2dx/libcocos2dcpp.so)
target_link_libraries(${PROJECT_NAME} 
    ${CMAKE_CURRENT_SOURCE_DIR}/Cacao/cocos/cocos2dx/libcocos2dcpp.so
)

target_compile_definitions(${PROJECT_NAME} PRIVATE "ANDROID")


include_directories(
    "${CACAO_ANDROID_NDK}/toolchains/llvm/prebuilt/darwin-x86_64/sysroot/usr/include"
    "${CACAO_ANDROID_NDK}/toolchains/llvm/prebuilt/darwin-x86_64/sysroot/usr/include/arm-linux-androideabi"
    "${CACAO_ANDROID_NDK}/toolchains/llvm/prebuilt/darwin-x86_64/sysroot/usr/include/c++/v1"
)

