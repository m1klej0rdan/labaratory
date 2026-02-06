cmake_minimum_required(VERSION 3.10)
project(StringProject VERSION 1.0.0)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_subdirectory(StringLib)
add_subdirectory(App)