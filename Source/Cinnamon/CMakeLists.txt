cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Cinnamon VERSION 2.0.0)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/Parser.py
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Parser.py  ${CMAKE_CURRENT_SOURCE_DIR}/Lexer.py
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/cinnamon.pickle
    COMMENT "Parsing Cinnamon"
)
