cmake_minimum_required(VERSION 3.23)
project(vectors LANGUAGES CXX)

add_executable(main)
target_sources(main PRIVATE main.cpp geom/geom.cpp geom/geom.hpp)
install(TARGETS main)