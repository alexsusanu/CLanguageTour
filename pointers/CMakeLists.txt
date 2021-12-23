cmake_minimum_required(VERSION 3.20)
project(pointers C)

set(CMAKE_C_STANDARD 99)

add_executable(pointers pointers.c file_pointers.c arrays.c malloc.c struct.c structs_pointers.c)
