cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Core VERSION 1.0.0 LANGUAGES CXX)

add_subdirectory("lilac-core")

add_library(Core STATIC Core.cpp)

target_link_libraries(Core lilac_hook)
target_include_directories(Core PUBLIC 
    . 
    lilac-core/include/
)

set_property(TARGET Core PROPERTY CXX_STANDARD 17)
