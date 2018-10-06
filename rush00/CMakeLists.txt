cmake_minimum_required(VERSION 3.12)
project(rush00)

#set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-lncurses")
set(CMAKE_C_STANDARD "${CMAKE_C_FLAGS} -Wall -Werror -lpdcurses")
add_executable(rush00 main.cpp)