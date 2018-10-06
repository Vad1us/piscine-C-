cmake_minimum_required(VERSION 3.12)
project(ex04)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex04
        ClapTrap.hpp
        ClapTrap.cpp
        FragTrap.hpp
        FragTrap.cpp
        NinjaTrap.cpp
        NinjaTrap.hpp
        ScavTrap.cpp
        ScavTrap.hpp
        main.cpp SuperTrap.cpp SuperTrap.hpp)