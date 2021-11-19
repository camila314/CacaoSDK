cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(HelloWorld VERSION 0.1.0 LANGUAGES C CXX)

set(SOURCE_FILES main.cpp custom-layer.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ferror-limit=20")

include(Cacao/cmake/CacaoRoot.cmake)
