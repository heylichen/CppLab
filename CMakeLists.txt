cmake_minimum_required(VERSION 3.22)
project(cpp_primer)

set(CMAKE_CXX_STANDARD 20)
add_executable(ValuePtrTest cpp_primer/ch13_copy/ValuePtrTest.cpp)
add_executable(PointerPtrTest cpp_primer/ch13_copy/PointerPtrTest.cpp)