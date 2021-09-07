cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Cacao VERSION 2.0.0 LANGUAGES C CXX)

add_subdirectory(GDML)

enable_language(ASM_NASM)
set(CMAKE_ASM_NASM_OBJECT_FORMAT macho64)

add_library(Cacao STATIC Cacao.cpp symtab.asm)

target_link_libraries(Cacao GDML)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/platform/shared/buildcackit.py "${CMAKE_CURRENT_SOURCE_DIR}/cinnamon.mm" "${CMAKE_CURRENT_SOURCE_DIR}/include/CacKit"
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/cinnamon.mm ${CMAKE_CURRENT_SOURCE_DIR}/platform/shared/buildcackit.py ${CMAKE_CURRENT_SOURCE_DIR}/platform/shared/base/cackit.begin.hpp ${CMAKE_CURRENT_SOURCE_DIR}/platform/shared/base/cackit.end.hpp
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/include/CacKit 
    COMMENT "Generating Cackit"
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/platform/macos/buildasm.py "${CMAKE_CURRENT_SOURCE_DIR}/cinnamon.mm" "${CMAKE_CURRENT_SOURCE_DIR}/symtab.asm"
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/cinnamon.mm ${CMAKE_CURRENT_SOURCE_DIR}/platform/macos/buildasm.py ${CMAKE_CURRENT_SOURCE_DIR}/platform/macos/base/symtab.begin.asm ${CMAKE_CURRENT_SOURCE_DIR}/platform/macos/base/symtab.end.asm
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/symtab.asm
    COMMENT "Generating symbols"
)

add_custom_command(
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/platform/shared/buildccdefs.py "${CMAKE_CURRENT_SOURCE_DIR}/cinnamon.mm" "${CMAKE_CURRENT_SOURCE_DIR}/include/cc_defs.hpp"
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/cinnamon.mm ${CMAKE_CURRENT_SOURCE_DIR}/platform/shared/buildccdefs.py ${CMAKE_CURRENT_SOURCE_DIR}/platform/shared/base/cc_defs.begin.hpp ${CMAKE_CURRENT_SOURCE_DIR}/platform/shared/base/cc_defs.end.hpp
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/include/cc_defs.hpp
    COMMENT "Generating headers"
)

# add_custom_command(
#     COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/platform/shared/buildcardamom.py "${CMAKE_CURRENT_SOURCE_DIR}/cinnamon.mm" "${CMAKE_CURRENT_SOURCE_DIR}/Cardamom.cpp"
#     DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/cinnamon.mm ${CMAKE_CURRENT_SOURCE_DIR}/platform/shared/buildcardamom.py
#     OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/include/cardamom.cpp
#     COMMENT "Generating source thingy"
# )

add_custom_target(Cackit ALL
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/include/CacKit
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/symtab.asm
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/include/cc_defs.hpp
    # DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/include/cardamom.cpp
)

add_dependencies(Cacao Cackit)
