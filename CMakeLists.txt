cmake_minimum_required(VERSION 3.27)
project(pybind_test)

# find_package(Python COMPONENTS Interpreter Development REQUIRED)
add_subdirectory(third_party/pybind11)


pybind11_add_module(pybind_test MODULE src/hello.cc src/pybind_api.cc)
target_include_directories(pybind_test PRIVATE include)