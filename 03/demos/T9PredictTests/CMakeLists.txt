project(t9engintest03)

add_executable(${PROJECT_NAME}
EngineTests.cpp
StringToDigitsDecoderTests.cpp
WordTreeTests.cpp
catch.hpp
)
target_link_libraries(${PROJECT_NAME} t9engine03)
