project(t9test)

add_executable(${PROJECT_NAME}
T9PredictTests.cpp
catch.hpp
)
target_link_libraries(${PROJECT_NAME} t9engine)
