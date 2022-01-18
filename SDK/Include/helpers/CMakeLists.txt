cmake_minimum_required(VERSION 3.0.0)

project(lilac_utils CXX)

file(GLOB_RECURSE UTILS_SOURCES 
	src/*.cpp
)

add_library(lilac_utils ${UTILS_SOURCES})

target_include_directories(
    lilac_utils PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}"
	"${CMAKE_CURRENT_SOURCE_DIR}/.."
)

target_link_libraries(
	lilac_utils PUBLIC
	lilac_core_hook
)
