cmake_minimum_required(VERSION 3.12)
project(rush00)

set(CMAKE_CXX_STANDARD 98)
#set(CMAKE_CXX_FLAGS "-lncurses")
#set(CMAKE_C_STANDARD "${CMAKE_C_FLAGS} -Wall -Werror -lpdcurses")

#find_package(Curses REQUIRED)
#include_directories(${CURSES_INCLUDE_DIR})
#
#target_link_libraries(rush00 ${CURSES_LIBRARIES})
#

#set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")
set(CURSES_NEED_NCURSES TRUE)
find_package(Curses REQUIRED)
if (CURSES_FOUND AND CURSES_HAVE_NCURSES_H)
    include_directories(${CURSES_INCLUDE_DIR})
    add_executable(rush00 main.cpp)
    target_link_libraries (rush00 ${CURSES_LIBRARIES})
endif()
