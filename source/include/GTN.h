#pragma once

struct Timer;

namespace GTN {
extern Timer timer;
extern unsigned int number;
extern unsigned int numberUser;
extern unsigned int numberOfTries;

void showTitle();
void assignRandomNumber();
void startTimer();
unsigned int inputNumber();
bool isInputValid();
bool isGuessCorrect(const unsigned int &number);
void stopTimer();
void showTimeDuration();
} // namespace GTN
