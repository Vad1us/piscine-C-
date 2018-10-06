cmake_minimum_required(VERSION 3.12)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03
        ClapTrap.cpp
        ClapTrap.hpp
        FragTrap.cpp
        FragTrap.hpp
        ScavTrap.hpp
        ScavTrap.cpp
        main.cpp
        NinjaTrap.cpp
        NinjaTrap.hpp)