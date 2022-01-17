cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Cacao VERSION 2.0.0 LANGUAGES CXX)

add_subdirectory(hook)

set_source_files_properties(${CACAO_CODEGEN_DIR}/Source.cpp PROPERTIES GENERATED 1)

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

if (NOT DEFINED CACAO_NO_GEN)
    add_subdirectory(gen)
endif()

target_compile_definitions(Cacao
	PRIVATE -DPROJECT_NAME=CacaoBase
)
