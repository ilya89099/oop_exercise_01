cmake_minimum_required(VERSION 3.14)
project(ooplab1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(ooplabs main.cpp bottle.cpp)