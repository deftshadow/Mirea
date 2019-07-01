cmake_minimum_required(VERSION 3.12)
project(4Lab)

set(CMAKE_CXX_STANDARD 14)

add_executable(4Lab main.cpp Sources/Child.cpp Headers/Child.h Sources/Complex.cpp Headers/Complex.h Sources/Tiles.cpp Headers/Tiles.h Sources/Vector.cpp Headers/Vector.h)