set(CMAKE_BUILD_TYPE RelWithDebugInfo)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (NOT DEFINED CACAO_TARGET_PLATFORM)
	if(APPLE)
		set(CACAO_TARGET_PLATFORM "MacOS")
	elseif(WIN32)
		set(CACAO_TARGET_PLATFORM "Win32")
	else()
		message(FATAL_ERROR "Unable to detect platform, please set CACAO_TARGET_PLATFORM in the root CMake file.")
	endif()
endif()

if (NOT DEFINED CACAO_PYTHON)
	if (WIN32)
		set(CACAO_PYTHON py)
	else()
		set(CACAO_PYTHON python3)
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

if("${CACAO_TARGET_PLATFORM}" STREQUAL "iOSo")
set(CACAO_SOURCES
	${PROJECT_SOURCE_DIR}/Cacao/Source.cpp 
)
message(WARNING "fix asap")
else()
set(CACAO_SOURCES
	${PROJECT_SOURCE_DIR}/Cacao/Source.cpp 
	${PROJECT_SOURCE_DIR}/Cacao/helpers/Cacao.cpp
)
endif()

if("${CACAO_TARGET_PLATFORM}" STREQUAL "MacOS")
	set(CACAO_FIX_SOURCES
		${PROJECT_SOURCE_DIR}/Cacao/helpers/HandlerFixes.cpp
	)
else()
	set(CACAO_FIX_SOURCES )
endif()

include_directories(
	${PROJECT_SOURCE_DIR}/Cacao/
	${PROJECT_SOURCE_DIR}/Cacao/helpers
	${PROJECT_SOURCE_DIR}/Cacao/base
	${PROJECT_SOURCE_DIR}/Cacao/old_stl
	${PROJECT_SOURCE_DIR}/Cacao/hook
	${PROJECT_SOURCE_DIR}/Cacao/hook/lilac-core/include
	${PROJECT_SOURCE_DIR}/Cacao/cocos/
	${PROJECT_SOURCE_DIR}/Cacao/cocos/cocos2dx
	${PROJECT_SOURCE_DIR}/Cacao/cocos/cocos2dx/include
	${PROJECT_SOURCE_DIR}/Cacao/cocos/cocos2dx/kazmath/include
	${PROJECT_SOURCE_DIR}/Cacao/cocos/extensions
	${INCLUDE_DIRECTORIES}
)

add_subdirectory(Cacao)

target_link_directories(${PROJECT_NAME} 
	PRIVATE Cacao
	${LINK_DIRECTORIES}
)
target_link_libraries(${PROJECT_NAME} 
	Cacao
	${LINK_LIBRARIES}
)

# basically
# https://stackoverflow.com/questions/3220277/what-do-the-makefile-symbols-and-mean
# get the naame of first prereq
# then replace non identifier chars with empty
# todo: replace space too
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__FILE_IDENTIFIER__='$(subst .,,$(subst /,,$(subst \\,,$<)))' ")


