cmake_minimum_required(VERSION 3.10)
project(c-course)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_C_COMPILER "clang")

add_executable(c-course playground/main.c)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
