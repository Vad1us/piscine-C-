cmake_minimum_required(VERSION 3.12)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex01
        Form.cpp
        Form.hpp
        Bureaucrat.cpp
        Bureaucrat.hpp
        main.cpp)