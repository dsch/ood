cmake_minimum_required(VERSION 3.5)
project(OOP CXX)

include(UseLATEX.cmake)
add_latex_document(script.tex
                   INPUTS lst/open_recursion.cpp)
                 
add_subdirectory(lst)  
