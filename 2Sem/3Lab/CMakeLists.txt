cmake_minimum_required(VERSION 3.12)
project(3Lab)

set(CMAKE_CXX_STANDARD 14)

add_executable(3Lab main.cpp Headers/Child.h Sources/Child.cpp Sources/Tiles.cpp Headers/Tiles.h Sources/Complex.cpp Headers/Complex.h Sources/Vector.cpp Headers/Vector.h)