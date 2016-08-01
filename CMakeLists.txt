cmake_minimum_required(VERSION 3.5)
project(OOP NONE)

include(UseLATEX.cmake)
add_latex_document(00_introduction.tex
                   INPUTS header.tex)

add_latex_document(01_buildsystem.tex
                   INPUTS header.tex)

add_latex_document(02_ood_basics.tex
                   INPUTS header.tex)
                   
add_latex_document(03_ood_pattern.tex
                   INPUTS header.tex)

add_latex_document(04_cpp.tex
                   INPUTS header.tex)

add_latex_document(05_cpp_and_c.tex
                   INPUTS header.tex)

add_latex_document(06_standards.tex
                   INPUTS header.tex)

add_latex_document(07_cleancode.tex
                   INPUTS header.tex)

add_latex_document(08_testing.tex
                   INPUTS header.tex)
                 
add_subdirectory(lst)  
