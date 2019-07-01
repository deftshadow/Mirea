cmake_minimum_required(VERSION 3.12)
project(6Lab)

set(CMAKE_CXX_STANDARD 14)

add_executable(6Lab main.cpp Headman/Headman.cpp Headman/Headman.h Alive/Alive.cpp Alive/Alive.h Animal/Animal.cpp Animal/Animal.h)