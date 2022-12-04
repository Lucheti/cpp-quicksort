cmake_minimum_required(VERSION 3.24)
project(cpp_sandbox)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_sandbox main.cpp list/Node.h list/linkedList.h items/Animal.h)
