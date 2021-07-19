cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Cacao VERSION 2.0.0 LANGUAGES C CXX)

add_subdirectory(GDML)

enable_language(ASM_NASM)
set(CMAKE_ASM_NASM_OBJECT_FORMAT macho64)

add_library(Cacao STATIC Cacao.cpp symtab.asm symadd.asm)

target_link_libraries(Cacao GDML)
