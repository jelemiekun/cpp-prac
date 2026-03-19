#include "Math.h"
#include <cstdlib>
#include <iostream>
#include <string>

void printArgs(int argc, char *argv[]);

int main(int argc, char *argv[]) {
  std::cout << std::to_string(Math::add(10, 5)) << '\n';
  return EXIT_SUCCESS;
}

void printArgs(int argc, char *argv[]) {
  std::cout << "Hello World! argc: " << std::to_string(argc) << ".\n";
  for (int i = 0; i < argc; i++) {
    std::cout << "argc[" << i << "]: " << argv[i] << '\n';
  }
}
