cmake_minimum_required(VERSION 3.12)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03
        Bureaucrat.cpp
        Bureaucrat.hpp
        Form.cpp
        Form.hpp
        PresidentialPardonForm.cpp
        PresidentialPardonForm.hpp
        RobotomyRequestForm.cpp
        RobotomyRequestForm.hpp
        ShrubberyCreationForm.cpp
        ShrubberyCreationForm.hpp
        main.cpp Intern.cpp Intern.hpp)