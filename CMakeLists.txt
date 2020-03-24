cmake_minimum_required(VERSION 3.14)
project(training)

set(CMAKE_CXX_STANDARD 14)

add_executable(training main.cpp StringBuilder.cpp StringBuilder.h HashTable.cpp HashTable.h include.h ArrayList.cpp ArrayList.h utils.cpp utils.h)