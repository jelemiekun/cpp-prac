#include <iostream>

inline void print(const std::string &message = "Hello World!");

inline int inputNumber() {
  int number;
  print("Number: ");
  std::cin >> number;
  return number;
}

inline void print(const std::string &message) { std::cout << message << '\n'; }

inline void printNumber(const float &number) {
  std::cout << "Number: " << number << '\n';
}

inline float add(const float &firstNumber, const float &secondNumber) {
  return firstNumber + secondNumber;
}
