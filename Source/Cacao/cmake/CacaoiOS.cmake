add_definitions(-DCC_TARGET_OS_IPHONE)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fms-extensions -Xlinker --no-demangle -Wno-deprecated -arch arm64e -isysroot ${CACAO_IOS_SDK}")
set(CMAKE_SYSTEM_NAME iOS)

include_directories(
    Cacao/api
    Cacao/cocos/cocos2dx/platform/ios
    Cacao/cocos/cocos2dx/platform/third_party/ios
    Cacao/cocos/cocos2dx/platform/third_party/ios/OGLES
)

set(PACKAGE_DIR ${CMAKE_CURRENT_BINARY_DIR}/ios_package)
set(OUT_FILE "${PROJECT_NAME}_${CMAKE_PROJECT_VERSION}-3+release_iphoneos-arm64.deb")

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/Cacao/pkg/iOS.py "${PACKAGE_DIR}" "${CMAKE_CURRENT_BINARY_DIR}/lib${PROJECT_NAME}.dylib" "${PROJECT_NAME}" "${CMAKE_CURRENT_SOURCE_DIR}/control" "${OUT_FILE}"
    DEPENDS ${CACAO_IOS_CONTROL}
    OUTPUT  ${PACKAGE_DIR}/_
    COMMENT "Packaging ${PROJECT_NAME}"
)

add_custom_target(
    iOSPackage ALL
    DEPENDS ${PACKAGE_DIR}/_
)

add_dependencies(iOSPackage ${PROJECT_NAME})

if (DEFINED CACAO_IOS_REMOTE_HOST)
    install(CODE "execute_process(COMMAND scp \"${PACKAGE_DIR}/${OUT_FILE}\" root@${CACAO_IOS_REMOTE_HOST}:/var/mobile/Documents)")
    install(CODE "execute_process(COMMAND ssh root@${CACAO_IOS_REMOTE_HOST} dpkg -i \"/var/mobile/Documents/${OUT_FILE}\")")
endif()