cmake_minimum_required(VERSION 2.8.7)
project(OOP CXX)

include(UseLATEX.cmake)
add_latex_document(script.tex
                   INPUTS lst/open_recursion.cpp)
                 
add_subdirectory(lst)  
