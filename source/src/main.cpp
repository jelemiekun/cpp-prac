#include "main.h"
#include <cstdlib>
#include <string>

#define LIMIT 10

int main() {
  float number = add(inputNumber(), inputNumber());
  std::string message = "";

  print();
  printNumber(number);

  if (number > LIMIT) {
    message = "Number is more than " + std::to_string(LIMIT) + "!";
    print(message);
  } else {
    message = "Number is less than " + std::to_string(LIMIT) + "!";
    print(message);
  }

  for (int i = 0; i < number; i++) {
    print();
    std::cout << i << &i << '\n';
  }
  return EXIT_SUCCESS;
}
