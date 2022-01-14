cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(Codegen)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(fmt)
#add_executable(headergen header.cpp)
add_executable(interfacegen interface.cpp)

#target_include_directories(headergen PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Broma/src)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-g")
target_link_libraries(interfacegen PUBLIC fmt)
target_include_directories(interfacegen PUBLIC 
	${CMAKE_CURRENT_SOURCE_DIR}/Broma/src
	${CMAKE_CURRENT_SOURCE_DIR}/fmt/include
)