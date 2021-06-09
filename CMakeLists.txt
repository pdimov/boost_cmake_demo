# Copyright 2021 Peter Dimov
# Distributed under the Boost Software License, Version 1.0.
# https://www.boost.org/LICENSE_1_0.txt

cmake_minimum_required(VERSION 3.8...3.20)

project(boost_cmake_demo LANGUAGES CXX)

# Add dependencies
add_subdirectory(deps)

# Declare main executable
add_executable(boost_cmake_demo src/main.cpp)

target_link_libraries(boost_cmake_demo Boost::system)
