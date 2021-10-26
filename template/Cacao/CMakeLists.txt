cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Cacao VERSION 2.0.0 LANGUAGES C CXX)

add_subdirectory(GDML)

enable_language(ASM_NASM)
set(CMAKE_ASM_NASM_OBJECT_FORMAT macho64)

add_library(Cacao STATIC Src/Helpers.cpp Src/stubs.asm)

target_link_libraries(Cacao GDML)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/kitgen.py "${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/source.mm" "${CMAKE_CURRENT_SOURCE_DIR}/Include/Cacao"
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/source.mm ${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/kitgen.py ${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/base/cackit.begin.hpp ${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/base/cackit.end.hpp
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/runeverytime
    COMMENT "Generating Cackit"
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/asmgen.py "${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/source.mm" "${CMAKE_CURRENT_SOURCE_DIR}/Src/stubs.asm"
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/source.mm ${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/asmgen.py ${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/base/stubs.begin.asm ${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/base/stubs.end.asm
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/runeverytime1
    COMMENT "Generating symbols"
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/headergen.py "${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/source.mm" "${CMAKE_CURRENT_SOURCE_DIR}/Include/Defs.hpp"
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/source.mm ${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/headergen.py ${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/base/Defs.begin.hpp ${CMAKE_CURRENT_SOURCE_DIR}/CacKitGen/base/Defs.end.hpp
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/Include/Defs.hpp ${CMAKE_CURRENT_SOURCE_DIR}/runeverytime2
    COMMENT "Generating headers"
)

add_custom_target(Cackit ALL
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/runeverytime
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/runeverytime1
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Include/Defs.hpp
)

add_dependencies(Cacao Cackit)
