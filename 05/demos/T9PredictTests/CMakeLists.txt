project(t9enginetests05)

add_executable(${PROJECT_NAME}
EngineTests.cpp
EngineTests_bdd.cpp
StringToDigitsDecoderTests.cpp
StringsToValueGenerator.h
WordTreeTests.cpp
catch.hpp
)
target_link_libraries(${PROJECT_NAME} t9engine05)
