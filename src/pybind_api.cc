#include <pybind11/pybind11.h>

#include "hello.h"

PYBIND11_MODULE(pybind_test, m) {
  m.doc() = "just test functions, print hello world and add two int";
  m.def("hello", &hello, "print hello world");
  m.def("add", &add, "add two int");
}