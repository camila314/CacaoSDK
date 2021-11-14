cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Cacao VERSION 2.0.0 LANGUAGES CXX)

add_subdirectory(core)

add_library(Cacao STATIC 
    Source.cpp 
    api/Cacao.cpp
)

target_link_libraries(Cacao Core)

file(GLOB_RECURSE "${CACAO_TARGET_PLATFORM}_Sources"
    ${CMAKE_CURRENT_SOURCE_DIR}/gen/data/*.mm
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/gen/Lexer.py ${CACAO_TARGET_PLATFORM} && python3 ${CMAKE_CURRENT_SOURCE_DIR}/gen/Parser.py ${CACAO_TARGET_PLATFORM}
    DEPENDS "${${CACAO_TARGET_PLATFORM}_Sources}"
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/gen/gen.pickle
    COMMENT "Parsing ${CACAO_TARGET_PLATFORM}"
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/gen/Header.py ${CACAO_TARGET_PLATFORM}
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/gen/gen.pickle
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/Header.hpp 
    COMMENT "Generating Header"
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/gen/Interface.py ${CACAO_TARGET_PLATFORM}
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/gen/gen.pickle
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/Interface.hpp
    COMMENT "Generating Interface"
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/gen/Source.py ${CACAO_TARGET_PLATFORM}
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/gen/gen.pickle
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/Source.cpp
    COMMENT "Generating Source"
)

add_custom_target(Gen ALL
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Source.cpp
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Header.hpp
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Interface.hpp
)

add_dependencies(Cacao Gen)

