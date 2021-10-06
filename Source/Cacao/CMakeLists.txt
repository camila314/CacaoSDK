cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Cacao VERSION 2.0.0 LANGUAGES CXX)

add_subdirectory(Core)

add_library(Cacao STATIC Source.cpp)

target_link_libraries(Cacao Core)

add_custom_command(
    COMMAND "" ALL
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/run0
)


add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/Cinnamon/Parser.py
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/run0
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/cinnamon.pickle
    COMMENT "Parsing Cinnamon"
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/Cinnamon/Header.py
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/run0
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/run1 ${CMAKE_CURRENT_SOURCE_DIR}/Header.hpp 
    COMMENT "Generating Header"
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/Cinnamon/Interface.py
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/run0
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/run2 ${CMAKE_CURRENT_SOURCE_DIR}/Interface.hpp
    COMMENT "Generating Interface"
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/Cinnamon/Source.py
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/run0
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/run3
    COMMENT "Generating Source"
)

add_custom_target(Cinnamon ALL
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/run1
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/run2
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/run3
)

add_dependencies(Cacao Cinnamon)

