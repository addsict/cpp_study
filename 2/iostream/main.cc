// cf. http://members.gamedev.net/sicrane/articles/iostream.html
#include <iostream>
#include <cmath>
#include <cstdio>

void print_sqrt(double d) {
  if (d >= 0)
    std::cout << "sqrt: " << sqrt(d) << std::endl;
  else
    std::cerr << "negative number!" << std::endl;
}

int main() {
  std::cout << "hello" << std::endl;
  std::cout << 0.1 << std::endl;
  std::cout << 10 << std::endl;
  std::cout << false << std::endl;
  std::cout << 'x' << std::endl;
  
  const char *s = "hello world\n";
  int i = 10;
  std::cout << s;
  std::cout << (void *)s << std::endl;
  std::cout << &i << std::endl;

  print_sqrt(100.0);
  print_sqrt(-20);

  std::ios::sync_with_stdio();
  printf("hi!\n");

  return 0;
}
