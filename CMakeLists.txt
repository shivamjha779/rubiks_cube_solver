cmake_minimum_required(VERSION 3.24)
project(rubiks_cube_solver)

set(CMAKE_CXX_STANDARD 17)

add_executable(rubiks_cube_solver main.cpp Model/RubiksCube.cpp Model/RubiksCube.h Model/RubiksCube1dArray.cpp Model/RubiksCube3dArray.cpp Model/RubiksCubeBitboard.cpp Solver/DFSSolver.h Solver/BFSSolver.h)
