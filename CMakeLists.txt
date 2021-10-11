cmake_minimum_required(VERSION 3.20)
project(tp_linked_list C)

set(CMAKE_C_STANDARD 99)

add_executable(tp_linked_list main.c src/linked_list/linked_list.h src/linked_list/linked_list.c src/history/history.h src/history/history.c src/big_int/big_int.h src/big_int/big_int.c)
