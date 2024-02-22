#include "hello.h"

#include <iostream>
#include <string>

void hello(const std::string& name) {
  std::cout << "hello, " << name << std::endl;
}

int add(const int a, const int b) { return a + b; }
