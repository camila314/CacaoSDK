cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Cacao VERSION 2.0.0 LANGUAGES C CXX)

add_subdirectory(GDML)

enable_language(ASM_NASM)
set(CMAKE_ASM_NASM_OBJECT_FORMAT macho64)

add_library(Cacao STATIC Cacao.cpp symtab.asm)

target_link_libraries(Cacao GDML)

add_custom_command(
	COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/Cac/asmtocackit.py "${CMAKE_CURRENT_SOURCE_DIR}/Cac/cackit.m" "${CMAKE_CURRENT_SOURCE_DIR}/symtab.asm" "${CMAKE_CURRENT_SOURCE_DIR}/include/CacKit"
	OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/include/CacKit
	COMMENT "Generating Cackit"
)

add_custom_target(Cackit ALL
   DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/include/CacKit
)

ADD_DEPENDENCIES(Cacao Cackit)
