cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Cacao VERSION 2.0.0 LANGUAGES CXX)

add_subdirectory(hook)

add_library(Cacao SHARED 
    Source.cpp 
    helpers/Cacao.cpp
    helpers/HandlerFixes.cpp
)

target_link_libraries(Cacao Core)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/gen/Lexer.py ${CACAO_TARGET_PLATFORM} && python3 ${CMAKE_CURRENT_SOURCE_DIR}/gen/Parser.py ${CACAO_TARGET_PLATFORM}
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/gen/data/GeometryDash.mm ${CMAKE_CURRENT_SOURCE_DIR}/gen/data/Cocos2d.mm ${CMAKE_CURRENT_SOURCE_DIR}/gen/Lexer.py ${CMAKE_CURRENT_SOURCE_DIR}/gen/Parser.py
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/gen/gen.pickle
    COMMENT "Parsing ${CACAO_TARGET_PLATFORM}"
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/gen/Header.py ${CACAO_TARGET_PLATFORM}
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/gen/gen.pickle ${CMAKE_CURRENT_SOURCE_DIR}/gen/Header.py
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/Header.hpp 
    COMMENT "Generating Header"
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/gen/Interface.py ${CACAO_TARGET_PLATFORM}
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/gen/gen.pickle ${CMAKE_CURRENT_SOURCE_DIR}/gen/Interface.py
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/Interface.hpp
    COMMENT "Generating Interface"
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/gen/Source.py ${CACAO_TARGET_PLATFORM}
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/gen/gen.pickle ${CMAKE_CURRENT_SOURCE_DIR}/gen/Source.py
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/Source.cpp
    COMMENT "Generating Source"
)

add_custom_target(Gen ALL
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Source.cpp
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Header.hpp
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Interface.hpp
)

add_dependencies(Cacao Gen)

