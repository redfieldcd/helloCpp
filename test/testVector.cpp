#include <iostream>
#include "vector.hpp"

int func_a(int, int);
//using namespace google::youtube;

#define m(x) #x
#define n(a,b) a##b

int main(int argc, char** argv)
{ 
  std::cout << argc << std::endl;
  std::cout << &(argv[1]) << std::endl;
  std::cout << m(test) << std::endl;
  std::n(c, out) << "test ##" << std::endl;
 
  google::youtube::Vector vector;
  vector.foo();
  func_a(1, 2);
  return 0; 
} 
