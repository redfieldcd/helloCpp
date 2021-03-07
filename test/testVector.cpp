#include <iostream>
#include <dlfcn.h>
#include "vector.hpp"

//int func_a(int, int);
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
  void* handle = dlopen("./collection.dylib", RTLD_LAZY);
  
  if(!handle) {
    std::cerr << "Cannot open lib: " << dlerror() << '\n';
    return 1;
  }
  typedef int (*sig)(int, int);
  sig func_a = (sig) dlsym(handle, "func_a");
    

  func_a(1, 2);
  return 0; 
} 
