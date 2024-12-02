project(t9engine04)

add_library(${PROJECT_NAME}
Engine.cpp
Engine.h
StringToDigitsEncoder.cpp
StringToDigitsEncoder.h
WordsNode.h
WordsTree.cpp
WordsTree.h
WordsTreeException.cpp
WordsTreeException.h
YetAnotherException.h
)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
