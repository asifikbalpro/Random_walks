cmake_minimum_required(VERSION 3.6)
project(RandomWalk)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/r_walk.cpp src/r_walk.h)
add_executable(RandomWalk ${SOURCE_FILES})