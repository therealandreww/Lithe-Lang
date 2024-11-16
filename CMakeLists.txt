cmake_minimum_required(VERSION 3.11)

project(
    LitheLang
    VERSION 0.2
    DESCRIPTION "The Lithe Programming Language"
    LANGUAGES CXX)

file(GLOB SOURCES
    src/*.h
    src/*.cpp
)
add_executable(program src/main.cpp)
