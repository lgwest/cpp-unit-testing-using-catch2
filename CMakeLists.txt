cmake_minimum_required(VERSION 3.27)

project(t9tests)

set(CMAKE_CXX_STANDARD 23)         # Använd C++23
set(CMAKE_CXX_STANDARD_REQUIRED ON) # Gör det obligatoriskt
set(CMAKE_CXX_EXTENSIONS OFF)      # Undvik kompilatorspecifika tillägg

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type" FORCE)
endif()

add_subdirectory(02/demos/T9Predict)
add_subdirectory(02/demos/T9PredictTests)

add_subdirectory(03/demos/T9Predict)
add_subdirectory(03/demos/T9PredictTests)

add_subdirectory(04/demos/T9Predict)
add_subdirectory(04/demos/T9PredictTests)

#add_subdirectory(05/demos/T9Predict)
#add_subdirectory(05/demos/T9PredictTests)

