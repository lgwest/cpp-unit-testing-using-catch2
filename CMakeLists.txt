cmake_minimum_required(VERSION 3.27)

project(t9tests)

set(CMAKE_CXX_STANDARD 23)         # Använd C++23
set(CMAKE_CXX_STANDARD_REQUIRED ON) # Gör det obligatoriskt
set(CMAKE_CXX_EXTENSIONS OFF)      # Undvik kompilatorspecifika tillägg

add_subdirectory(02/demos/T9Predict/T9Predict)
add_subdirectory(02/demos/T9Predict/T9PredictTests)

