set(CMAKE_CXX_FLAGS "-std=c++11 -Wextra")
file(GLOB INPUT_FILES *.cpp)

add_library(dummy AutoType.cpp open_recursion.cpp)

add_executable(SimpleString SimpleString.cpp)
