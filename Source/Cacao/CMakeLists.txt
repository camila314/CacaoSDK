cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Cacao VERSION 2.0.0)

add_subdirectory(GDML)

add_library(Cacao STATIC Source.cpp)

target_link_libraries(Cacao GDML)
