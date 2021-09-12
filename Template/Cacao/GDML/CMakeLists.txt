cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(GDML VERSION 1.0.0 LANGUAGES CXX)


add_library(GDML STATIC GDML.cpp lowLevel.cpp)

target_link_directories(GDML PUBLIC prebuilt/)
target_link_libraries(GDML Zydis)
target_include_directories(GDML PRIVATE . Zydis/)