cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Cacao VERSION 2.0.0 LANGUAGES CXX)

add_subdirectory(hook)

# FILE(WRITE ${Cacao_SOURCE_DIR}/Header.hpp "") 
# FILE(WRITE ${Cacao_SOURCE_DIR}/Interface.hpp "") 
# FILE(WRITE ${Cacao_SOURCE_DIR}/Source.cpp "") 

set_property(SOURCE ${Cacao_SOURCE_DIR}/Source.cpp PROPERTY GENERATED 1)

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

add_custom_command(
    COMMAND ${CACAO_PYTHON} ${Cacao_SOURCE_DIR}/gen/Lexer.py ${CACAO_TARGET_PLATFORM} && ${CACAO_PYTHON} ${Cacao_SOURCE_DIR}/gen/Parser.py ${CACAO_TARGET_PLATFORM}
    DEPENDS ${Cacao_SOURCE_DIR}/gen/data/GeometryDash.mm ${Cacao_SOURCE_DIR}/gen/data/Cocos2d.mm ${Cacao_SOURCE_DIR}/gen/Lexer.py ${Cacao_SOURCE_DIR}/gen/Parser.py
    OUTPUT ${Cacao_SOURCE_DIR}/gen/gen.pickle
    COMMENT "Parsing ${CACAO_TARGET_PLATFORM}"
)

add_custom_command(
    COMMAND ${CACAO_PYTHON} ${Cacao_SOURCE_DIR}/gen/Header.py ${CACAO_TARGET_PLATFORM}
    DEPENDS ${Cacao_SOURCE_DIR}/gen/gen.pickle
    OUTPUT ${Cacao_SOURCE_DIR}/Header_.hpp 
    COMMENT "Generating Header"
)

add_custom_command(
    COMMAND ${CACAO_PYTHON} ${Cacao_SOURCE_DIR}/gen/Interface.py ${CACAO_TARGET_PLATFORM}
    DEPENDS ${Cacao_SOURCE_DIR}/gen/gen.pickle
    OUTPUT ${Cacao_SOURCE_DIR}/Interface_.hpp
    COMMENT "Generating Interface"
)

add_custom_command(
    COMMAND ${CACAO_PYTHON} ${Cacao_SOURCE_DIR}/gen/Source.py ${CACAO_TARGET_PLATFORM}
    DEPENDS ${Cacao_SOURCE_DIR}/gen/gen.pickle
    OUTPUT ${Cacao_SOURCE_DIR}/Source_.cpp
    COMMENT "Generating Source"
)

add_custom_target(Gen ALL
    DEPENDS ${Cacao_SOURCE_DIR}/Source_.cpp
    DEPENDS ${Cacao_SOURCE_DIR}/Header_.hpp
    DEPENDS ${Cacao_SOURCE_DIR}/Interface_.hpp
)

add_dependencies(Cacao Gen)

target_compile_definitions(Cacao
	PRIVATE -DPROJECT_NAME=CacaoBase
)
