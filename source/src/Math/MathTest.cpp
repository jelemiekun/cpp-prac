#include "Math.h"
#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {
  int x, y;

  std::cout << "Perform test on Math::add." << '\n';
  std::cout << "First Number: ";
  std::cin >> x;
  std::cout << "Second Number: ";
  std::cin >> y;

  std::cout << "Result: " << Math::add(x, y) << '\n';
  std::cout << "Thank you, " << argv[1] << '\n';

  std::cin;

  return EXIT_SUCCESS;
}
