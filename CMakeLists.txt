cmake_minimum_required(VERSION 2.8.7)
project(OOP CXX)

file(GLOB INPUT_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} lst/*.cpp)
string(REPLACE ";" " " INPUTS ${INPUT_FILES})
MESSAGE("${INPUT_FILES}")

include(UseLATEX.cmake)
add_latex_document(script.tex
                   INPUTS ${INPUT_FILES}                   
                   IMAGE_DIRS img)
                 
add_subdirectory(lst)
