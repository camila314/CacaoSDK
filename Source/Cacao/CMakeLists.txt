cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Cacao VERSION 2.0.0 LANGUAGES CXX)

add_subdirectory(core)

add_library(Cacao STATIC Source.cpp api/Cacao.cpp)

target_link_libraries(Cacao Core)

add_custom_command(
    COMMAND "" ALL
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/run0
)

if(APPLE)
    add_custom_command(
        COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/gen/Lexer.py && python3 ${CMAKE_CURRENT_SOURCE_DIR}/gen/Parser.py
        DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/gen/MacOS/Entry.mm
        OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/gen.pickle
        COMMENT "Parsing MacOS"
    )
elseif(WIN32)
else()
endif()

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/gen/Header.py
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/gen.pickle
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/run1 ${CMAKE_CURRENT_SOURCE_DIR}/Header.hpp 
    COMMENT "Generating Header"
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/gen/Interface.py
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/gen.pickle
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/run2 ${CMAKE_CURRENT_SOURCE_DIR}/Interface.hpp
    COMMENT "Generating Interface"
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/gen/Source.py
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/gen.pickle
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/run3
    COMMENT "Generating Source"
)

add_custom_target(Gen ALL
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/run1
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/run2
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/run3
)

add_dependencies(Cacao Gen)

