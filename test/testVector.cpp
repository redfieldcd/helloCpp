#include <iostream>
#include "vector.hpp"
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
  return 0; 
} 
