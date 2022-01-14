cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Cacao VERSION 2.0.0 LANGUAGES CXX)

add_subdirectory(hook)

# if (NOT EXISTS ${Cacao_SOURCE_DIR}/Header.hpp) 
# 	FILE(WRITE ${Cacao_SOURCE_DIR}/Header.hpp "") 
# endif()
# if (NOT EXISTS ${Cacao_SOURCE_DIR}/Interface.hpp) 
# 	FILE(WRITE ${Cacao_SOURCE_DIR}/Interface.hpp "") 
# endif()
# if (NOT EXISTS ${Cacao_SOURCE_DIR}/Source.hpp) 
# 	FILE(WRITE ${Cacao_SOURCE_DIR}/Source.cpp "") 
# endif()

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

target_compile_definitions(Cacao
	PRIVATE -DPROJECT_NAME=CacaoBase
)
