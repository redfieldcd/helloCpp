#include <iostream>

int func_a(int a, int b = 1)
{ 
  int c = a + b;
  std::cout << c <<  std::endl;
  return c;
}
