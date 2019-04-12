cmake_minimum_required(VERSION 3.12)
project(3Lab)

set(CMAKE_CXX_STANDARD 14)

add_executable(3Lab main.cpp Headers/1.h Sources/1.cpp Sources/2.cpp Headers/2.h Sources/3.cpp Headers/3.h 4.cpp 4.h)