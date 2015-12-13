#include <iostream>
#include <cmath>
#include <cstdio>

void foo(int a) {
  std::cout << a << std::endl;
}

void foo(int a, int b) {
  std::cout << a << b << std::endl;
}

void foo(int a, int b, float c) {
  std::cout << a << b << c << std::endl;
}

int main() {
  foo(1, 2);
  return 0;
}
