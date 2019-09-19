cmake_minimum_required(VERSION 3.14)
project(oop_exercise_01)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(oop_exercise_01 main.cpp bottle.cpp)