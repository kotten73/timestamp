cmake_minimum_required(VERSION 3.25)

project(timestamp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(timestamp "src/timestamp.cpp")

install(TARGETS timestamp DESTINATION bin)
