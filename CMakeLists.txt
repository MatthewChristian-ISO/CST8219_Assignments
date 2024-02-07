# CMakeList.txt : CMake project for Week3.

# Sets the minimum version of CMake that is required to build this project.
cmake_minimum_required(VERSION 3.2)

# Sets project name.
project ("Week2")

# Uses the specified source files to add an executable file to the project.
add_executable(Week2 "Week2.cpp" "Vehicle.h" "Vehicle.cpp")

# Sets the C++ Language Version.
set_property (TARGET Week2 PROPERTY CXX_STANDARD 11)

# Sets a requirement for a C++ Language Version.
set_property (TARGET Week2 PROPERTY CXX_STANDARD_REQUIRED ON)