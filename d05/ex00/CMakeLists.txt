cmake_minimum_required(VERSION 3.12)
project(ex00)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex00
        Bureaucrat.cpp
        Bureaucrat.hpp
        main.cpp)
