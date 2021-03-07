#include <iostream>


int func_a(int a, int b = 1) {
  int c = a + b;
  std::cout << c <<  std::endl;
  return c;
}

/*
template <class T>
T func_a(T a, T b = 1)
{
  T c = a + b;
  std::cout << c <<  std::endl;
  return c;
}
*/
