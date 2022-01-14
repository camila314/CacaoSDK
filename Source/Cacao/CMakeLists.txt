cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Cacao VERSION 2.0.0 LANGUAGES CXX)

add_subdirectory(hook)

FILE(WRITE Header.hpp "")
FILE(WRITE Interface.hpp "")
FILE(WRITE Source.cpp "")

if (DEFINED CACAO_COMPILE_STATIC)
    add_library(Cacao STATIC 
        ${CACAO_SOURCES}
        ${CACAO_FIX_SOURCES}
    )
else()
    add_library(Cacao SHARED 
        ${CACAO_SOURCES}
        ${CACAO_FIX_SOURCES}
    )
endif()

link_prebuilts(Cacao)


target_link_libraries(Cacao Core)

add_subdirectory(gen)

add_custom_command(
  OUTPUT ${Cacao_SOURCE_DIR}/Interface_.hpp
  COMMAND ${CMAKE_CURRENT_BINARY_DIR}/gen/interfacegen ${CACAO_TARGET_PLATFORM} ${CMAKE_CURRENT_SOURCE_DIR}/gen/data > Interface.hpp
  DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/gen/interfacegen
  COMMENT "Generating Interface"
  VERBATIM
)

add_custom_target(Gen ALL
    #DEPENDS ${Cacao_SOURCE_DIR}/Source_.cpp
    #DEPENDS ${Cacao_SOURCE_DIR}/Header_.hpp
    DEPENDS ${Cacao_SOURCE_DIR}/Interface_.hpp
)

add_dependencies(Gen interfacegen)

add_dependencies(Cacao Gen)
target_compile_definitions(Cacao
	PRIVATE -DPROJECT_NAME=CacaoBase
)
