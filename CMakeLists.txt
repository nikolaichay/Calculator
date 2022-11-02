cmake_minimum_required (VERSION 3.8)

project ("Calc")

add_executable (Calc "Calc.cpp" "Calc.h" "Main.cpp" "Loader.cpp" "Loader.h" "Operation.cpp" "Operation.h")
set_property(TARGET Calc PROPERTY CXX_STANDARD 20)
