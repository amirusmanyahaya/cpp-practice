cmake_minimum_required(VERSION 3.10)
project(custom_array VERSION 1.0.0 LANGUAGES CXX)

add_executable(custom_array src/main.cpp src/array.cpp)
target_include_directories(custom_array PRIVATE include)