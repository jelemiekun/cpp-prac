#include "Util.h"
#include "GTN.h"

using namespace GTN;

void run() {
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
      print("LOWER\n");
    else
      print("HIGHER\n");
  }

  print("You guessed the number with " + std::to_string(numberOfTries) +
        " tries!\n");
  showTimeDuration();
}
