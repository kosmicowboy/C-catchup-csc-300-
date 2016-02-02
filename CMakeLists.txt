cmake_minimum_required(VERSION 3.3)
project(Project_1_csc_300)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES "Source Files/main.cpp" "Header Files/definitions.h" "Source Files/definitions.cpp")
add_executable(Project_1_csc_300 ${SOURCE_FILES})