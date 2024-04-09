cmake_minimum_required(VERSION 3.27)
project(character_management_system)

set(CMAKE_CXX_STANDARD 17)

add_executable(character_management_system main.cpp
        Character.h
        Character.cpp)
