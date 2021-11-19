set(CACAO_TARGET_PLATFORM "MacOS")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fms-extensions -Xlinker --no-demangle -Wno-deprecated")

include_directories(
    Cacao/api
    Cacao/cocos/cocos-headers/cocos2dx/platform/mac
    Cacao/cocos/cocos-headers/cocos2dx/platform/third_party/mac
    Cacao/cocos/cocos-headers/cocos2dx/platform/third_party/mac/OGLES
)

add_definitions(-DCC_TARGET_OS_MAC)

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