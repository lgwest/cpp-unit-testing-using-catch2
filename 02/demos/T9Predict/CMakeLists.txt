project(t9engine02)

add_library(${PROJECT_NAME}
Engine.cpp
Engine.h
WordsTree.cpp
WordsTree.h
)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})