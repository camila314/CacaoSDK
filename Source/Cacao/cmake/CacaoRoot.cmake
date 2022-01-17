set(CMAKE_BUILD_TYPE RelWithDebugInfo)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


set(CACAO_CODEGEN_DIR ${CMAKE_CURRENT_BINARY_DIR}/Gen)

file(MAKE_DIRECTORY ${CACAO_CODEGEN_DIR})

if (NOT DEFINED CACAO_TARGET_PLATFORM)
	if(APPLE)
		set(CACAO_TARGET_PLATFORM "MacOS")
	elseif(WIN32)
		set(CACAO_TARGET_PLATFORM "Win32")
	else()
		message(FATAL_ERROR "Unable to detect platform, please set CACAO_TARGET_PLATFORM in the root CMake file.")
	endif()
endif()

if (DEFINED SOURCE_FILES)
	add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})
else()
	message(FATAL_ERROR "Please set SOURCE_FILES in the root CMake file.")
endif()

if("${CACAO_TARGET_PLATFORM}" STREQUAL "MacOS")
	include(${CMAKE_CURRENT_LIST_DIR}/CacaoMacOS.cmake)
elseif("${CACAO_TARGET_PLATFORM}" STREQUAL "Win32")
	include(${CMAKE_CURRENT_LIST_DIR}/CacaoWin32.cmake)
elseif("${CACAO_TARGET_PLATFORM}" STREQUAL "iOS")
	include(${CMAKE_CURRENT_LIST_DIR}/CacaoiOS.cmake)
elseif("${CACAO_TARGET_PLATFORM}" STREQUAL "Android")
	include(${CMAKE_CURRENT_LIST_DIR}/CacaoAndroid.cmake)
else()
	message(FATAL_ERROR "Not supported platform, please specify from the following: MacOS, Win32, iOS, Android.")
endif()

target_compile_definitions(${PROJECT_NAME}
	PRIVATE -DPROJECT_NAME=${PROJECT_NAME}
	# PRIVATE "-D__FILENAME__='\"$(subst${CMAKE_SOURCE_DIR}/,,$(abspath $<))\"'"
)


file(WRITE ${CACAO_CODEGEN_DIR}/Source.cpp "// this text shouldn't be visible") 

set(CACAO_SOURCES
	${CACAO_CODEGEN_DIR}/Source.cpp
	${Cacao_SOURCE_DIR}/helpers/Cacao.cpp
)

if("${CACAO_TARGET_PLATFORM}" STREQUAL "MacOS")
	set(CACAO_FIX_SOURCES
		${Cacao_SOURCE_DIR}/helpers/HandlerFixes.cpp
	)
else()
	set(CACAO_FIX_SOURCES )
endif()

include_directories(
	${CACAO_CODEGEN_DIR}/
	${Cacao_SOURCE_DIR}/
	${Cacao_SOURCE_DIR}/helpers
	${Cacao_SOURCE_DIR}/base
	${Cacao_SOURCE_DIR}/old_stl
	${Cacao_SOURCE_DIR}/hook
	${Cacao_SOURCE_DIR}/hook/lilac-core/include
	${Cacao_SOURCE_DIR}/cocos/
	${Cacao_SOURCE_DIR}/cocos/cocos2dx
	${Cacao_SOURCE_DIR}/cocos/cocos2dx/include
	${Cacao_SOURCE_DIR}/cocos/cocos2dx/kazmath/include
	${Cacao_SOURCE_DIR}/cocos/extensions
	${Cacao_SOURCE_DIR}/fmod
	${Cacao_SOURCE_DIR}/gen/fmt/include
	${INCLUDE_DIRECTORIES}
)

add_subdirectory(Cacao)

target_link_directories(${PROJECT_NAME} 
	PRIVATE Cacao
	${LINK_DIRECTORIES}
)
target_link_libraries(${PROJECT_NAME} 
	Cacao
	fmt
	${LINK_LIBRARIES}
)

# basically
# https://stackoverflow.com/questions/3220277/what-do-the-makefile-symbols-and-mean
# get the naame of first prereq
# then replace non identifier chars with empty
# todo: replace space too
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__FILE_IDENTIFIER__='$(subst .,,$(subst /,,$(subst \\,,$<)))' ")


