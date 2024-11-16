cmake_minimum_required(VERSION 3.11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin)

project(
    LitheLang
    VERSION 0.2
    DESCRIPTION "The Lithe Programming Language"
    LANGUAGES CXX)

file(GLOB SOURCES
    src/*.h
    src/*.c
    src/*.cpp
    src/*.hpp
)
add_executable(lithe src/main.cpp)
