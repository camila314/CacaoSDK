cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Cacao VERSION 2.0.0 LANGUAGES C CXX)

add_subdirectory(GDML)

enable_language(ASM_NASM)
set(CMAKE_ASM_NASM_OBJECT_FORMAT macho64)

add_library(Cacao STATIC Cacao.cpp symtab.asm)

target_link_libraries(Cacao GDML)

add_custom_command(
	COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/Auto/buildcackit.py "${CMAKE_CURRENT_SOURCE_DIR}/cacnew.mm" "${CMAKE_CURRENT_SOURCE_DIR}/include/CacKit"
	DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/cacnew.mm
	OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/include/CacKit
	COMMENT "Generating Cackit"
)

# add_custom_command(
# 	COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/Auto/buildasm.py "${CMAKE_CURRENT_SOURCE_DIR}/cacnew.mm" "${CMAKE_CURRENT_SOURCE_DIR}/symtab.asm"
#    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/cacnew.mm
#    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Auto/functions.txt
# 	OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/symtab.asm
# 	COMMENT "Generating symbols"
# )

add_custom_command(
	COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/Auto/buildccdefs.py "${CMAKE_CURRENT_SOURCE_DIR}/cacnew.mm" "${CMAKE_CURRENT_SOURCE_DIR}/include/cc_defs.hpp"
   DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/cacnew.mm
	OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/include/cc_defs.hpp
	COMMENT "Generating headers"
)

add_custom_target(Cackit ALL
   DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/include/CacKit
   DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/symtab.asm
   DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/include/cc_defs.hpp
)

ADD_DEPENDENCIES(Cacao Cackit)
