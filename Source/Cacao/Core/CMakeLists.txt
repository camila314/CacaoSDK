cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Core VERSION 1.0.0 LANGUAGES CXX)


add_library(Core STATIC Entry.cpp Route.cpp)

target_link_directories(Core PUBLIC prebuilt/)
target_link_libraries(Core Zydis)
target_include_directories(Core PRIVATE . Zydis/)
