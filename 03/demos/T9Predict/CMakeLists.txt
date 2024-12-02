project(t9engine03)

add_library(${PROJECT_NAME}
Engine.cpp
Engine.h
StringToDigitsEncoder.cpp
StringToDigitsEncoder.h
WordsNode.h
WordsTree.cpp
WordsTree.h
)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
