# CMakeList.txt : CMake project for Week2.

# Sets the minimum version of CMake that is required to build this project.
cmake_minimum_required(VERSION 3.5)

# Sets project name.
project ("Week2")

# Uses the specified source files to add an executable file to the project.
add_executable(Week2 "Vehicle.h" "Vehicle.cpp" "GasolineVehicle.h" "GasolineVehicle.cpp" 
			         "ElectricVehicle.h" "ElectricVehicle.cpp" "HybridVehicle.h" 
					 "HybridVehicle.cpp" "Week2.cpp")

# Sets the C++ Language Version.
set_property (TARGET Week2 PROPERTY CXX_STANDARD 11)

# Sets a requirement for a C++ Language Version.
set_property (TARGET Week2 PROPERTY CXX_STANDARD_REQUIRED ON)