#include "main.h"
#include <iostream>
#include <random>
#include <string>

int main() {
  GTN::guessLoop();
  return 0;
}

namespace GTN {
unsigned int number;
unsigned int numberUser;
unsigned int numberOfTries;

void guessLoop() {
  showTitle();
  assignRandomNumber();
  bool guessed = false;

  while (!guessed) {
    numberOfTries++;

    numberUser = inputNumber();
    guessed = isGuessCorrect(numberUser);

    if (guessed)
      break;

    if (numberUser > number)
      misc::print("LOWER\n");
    else
      misc::print("HIGHER\n");
  }

  misc::print("You guessed the number with " + std::to_string(numberOfTries) +
              " tries!\n");
}

void showTitle() { misc::print("Guess the number! (1-100)\n"); }

void assignRandomNumber() {
  static std::random_device dev;
  static std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist6(1, 100);
  number = dist6(rng);
}

unsigned int inputNumber() {
  unsigned int number;

  do {
    misc::print("Number: ");
    std::cin >> number;
  } while (!isInputValid());

  return number;
}

bool isInputValid() {
  if (std::cin.fail()) {
    misc::print("Not a valid number\n");
    std::cin.clear();
    std::cin.ignore(1000, '\n');
    return false;
  } else {
    return true;
  }
}

bool isGuessCorrect(const unsigned int &number) {
  return number == GTN::number;
}

} // namespace GTN

namespace misc {
void print(const std::string &string) { std::cout << string; }

} // namespace misc
