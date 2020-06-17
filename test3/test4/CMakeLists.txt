cmake_minimum_required(VERSION 3.5)
project(constructor_test)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -O0 -fno-elide-constructors")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O0 -std=c++11 -fno-elide-constructors")

add_executable(constructor_test main.cpp)
