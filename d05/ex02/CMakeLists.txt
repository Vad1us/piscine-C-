cmake_minimum_required(VERSION 3.12)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex02
        Bureaucrat.hpp
        Bureaucrat.cpp
        Form.hpp
        Form.cpp
        main.cpp ShrubberyCreationForm.cpp ShrubberyCreationForm.hpp RobotomyRequestForm.cpp RobotomyRequestForm.hpp PresidentialPardonForm.cpp PresidentialPardonForm.hpp)