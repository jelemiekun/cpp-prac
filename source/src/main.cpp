#include "main.h"
#include "Timer.h"
#include <iostream>
#include <random>
#include <string>

int main() {
  GTN::guessLoop();
  return 0;
}

namespace GTN {
Timer timer;
unsigned int number;
unsigned int numberUser;
unsigned int numberOfTries;

void guessLoop() {
  showTitle();
  assignRandomNumber();
  startTimer();
  bool guessed = false;

  while (!guessed) {
    numberOfTries++;

    numberUser = inputNumber();
    guessed = isGuessCorrect(numberUser);

    if (guessed) {
      stopTimer();
      break;
    }

    if (numberUser > number)
      misc::print("LOWER\n");
    else
      misc::print("HIGHER\n");
  }

  misc::print("You guessed the number with " + std::to_string(numberOfTries) +
              " tries!\n");
  showTimeDuration();
}

void showTitle() { misc::print("Guess the number! (1-100)\n"); }

void assignRandomNumber() {
  static std::random_device dev;
  static std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist6(1, 100);
  number = dist6(rng);
}

void startTimer() { timer.start(); }

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

void stopTimer() { timer.stop(); }

void showTimeDuration() {
  misc::print("Time it took: " + std::to_string(timer.duration.count()) +
              " seconds.\n");
}

} // namespace GTN

namespace misc {
void print(const std::string &string) { std::cout << string; }

} // namespace misc
