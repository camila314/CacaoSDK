add_definitions(-DCC_TARGET_OS_IPHONE)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fms-extensions -Xlinker --no-demangle -Wno-deprecated -arch arm64 -isysroot ${CACAO_IOS_SDK}")
set(CMAKE_SYSTEM_NAME iOS)

include_directories(
    Cacao/cocos/cocos-headers/cocos2dx/platform/ios
    Cacao/cocos/cocos-headers/cocos2dx/platform/third_party/ios
    Cacao/cocos/cocos-headers/cocos2dx/platform/third_party/ios/OGLES
)

