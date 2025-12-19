cmake_minimum_required(VERSION 3.10)

project(Clabs C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-g -O0 -Wall")

add_executable(helloWorld "Week 1/helloWorld.c")
add_executable(a_program "Week 1/a.c")
add_executable(wLoop "Week 1/wLoop.c")