cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

add_executable(MyProject
    src/BaseClass.cpp
    src/BaseClass.h
    src/DerivedClass.cpp
    src/DerivedClass.h
    src/Utils.cpp
    src/Utils.h
    src/main.cpp
)