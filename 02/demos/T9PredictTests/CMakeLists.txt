project(t9enginetests02)

add_executable(${PROJECT_NAME}
T9PredictTests.cpp
catch.hpp
)
target_link_libraries(${PROJECT_NAME} t9engine02)
