cmake_minimum_required(VERSION 3.27)
project(character_management_system)

set(CMAKE_CXX_STANDARD 17)

add_executable(character_management_system src/main.cpp
        src/Character.h
        src/Character.cpp
        Utils/Roll.cpp
        Utils/Roll.h)
