cmake_minimum_required(VERSION 3.7)
project(epollnet)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES library.cpp library.h myepoll.hpp myepoll.cpp)
add_library(epollnet SHARED ${SOURCE_FILES})