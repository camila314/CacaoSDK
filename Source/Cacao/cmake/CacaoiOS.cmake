set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fms-extensions -Xlinker --no-demangle -Wno-deprecated -arch arm64 -isysroot ${CACAO_IOS_SDK}")
set(CMAKE_SYSTEM_NAME iOS)

include_directories(
    Cacao/api
    Cacao/cocos/cocos2dx/platform/ios
    Cacao/cocos/cocos2dx/platform/third_party/ios
    Cacao/cocos/cocos2dx/platform/third_party/ios/OGLES
)

add_definitions(-DCC_TARGET_OS_IPHONE)