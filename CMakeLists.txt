cmake_minimum_required(VERSION 3.24)
project(test)

set(CMAKE_CXX_STANDARD 23)

add_executable(test main.cpp
        main2.cpp
        coordin.h
        rect_to_polar.cpp
        support.cpp
        twofile.cpp
        namesp.h
        namesp.cpp
        stock00.h
        stock00.cpp
        stock10.h
        stock10.cpp
        stock20.h
        stock20.cpp)
