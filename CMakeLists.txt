cmake_minimum_required(VERSION 3.15)
project(cplusplus)

set(CMAKE_CXX_STANDARD 11)
include_directories(include)

add_executable(cplusplus main.cpp include/person.h)