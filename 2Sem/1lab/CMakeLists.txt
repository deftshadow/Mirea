cmake_minimum_required(VERSION 3.12)
project(1lab)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES_DIR ${CMAKE_SOURCE_DIR}/src)
set(HEADERS_DIR ${CMAKE_SOURCE_DIR}/inc)


file(GLOB HEADERS ${HEADERS_DIR}/*.h)
file(GLOB SOURCES ${SOURCES_DIR}/*.cpp)

include_directories(inc src)

add_executable(1lab ${HEADERS} ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${HEADERS_DIR})
