cmake_minimum_required(VERSION 3.14)
project(cppBasics)

set(CMAKE_CXX_STANDARD 14)

add_executable(cppBasics main.cpp StringBuilder.cpp StringBuilder.h HashTable.h include.h ArrayList.cpp ArrayList.h utils.cpp utils.h HashTable.cpp)