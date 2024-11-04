cmake_minimum_required(VERSION 3.5.1)

project(SmartPointers VERSION 0.0.1 LANGUAGES CXX)

add_executable(
    smart_pointers
    src/unique_pointer.cpp
    src/shared_pointer.cpp
    src/main.cpp
)

target_include_directories(
    smart_pointers
    PUBLIC include
)