cmake_minimum_required(VERSION 3.24)
project(plotexample)
find_package(Matplot++ REQUIRED)
set(CMAKE_CXX_STANDARD 23)

add_executable(plotexample plotexample.cpp)
target_link_libraries(plotexample PRIVATE Matplot++::matplot)
