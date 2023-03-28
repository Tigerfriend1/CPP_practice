cmake_minimum_required(VERSION 3.24)
project(shape)

set(CMAKE_CXX_STANDARD 17)

add_executable(shape shape_main.cpp shape.cpp shape.h)
