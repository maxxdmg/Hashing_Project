cmake_minimum_required(VERSION 3.8)
project(Hashing_Project)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        include/catch.hpp
        include/my_hash.h
        include/superhero.h
        src/main.cpp)


add_executable(Hashing_Project ${SOURCE_FILES})