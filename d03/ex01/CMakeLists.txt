cmake_minimum_required(VERSION 3.12)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex01
        FragTrap.cpp
        FragTrap.hpp
        main.cpp ScavTrap.cpp ScavTrap.hpp)