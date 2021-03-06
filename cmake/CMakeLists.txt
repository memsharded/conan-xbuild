
set(CMAKE_CXX_COMPILER_WORKS 1)
set(CMAKE_CXX_ABI_COMPILED 1)

cmake_minimum_required(VERSION 3.10)
project(cmake LANGUAGES CXX)

include(GenerateExportHeader)
include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

find_package(cmakelib REQUIRED)

file(WRITE ${CMAKE_CURRENT_SOURCE_DIR}/cmake.h "#pragma once\nconst char* const cmake_MESSAGE=\"${MESSAGE}\";")

add_library(cmake cmake/lib.cpp cmake/lib.h)
target_include_directories(cmake
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
generate_export_header(cmake)
target_link_libraries(cmake PUBLIC cmakelib::cmakelib )
set_target_properties(cmake PROPERTIES OUTPUT_NAME cmake)



add_executable(cmake_exe cmake_exe/main.cpp)
target_link_libraries(cmake_exe PUBLIC cmake )
set_target_properties(cmake_exe PROPERTIES OUTPUT_NAME cmake_exe)
