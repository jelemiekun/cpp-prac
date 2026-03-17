#include <string>

struct Timer;

namespace GTN {
extern Timer timer;
extern unsigned int number;
extern unsigned int numberUser;
extern unsigned int numberOfTries;

void guessLoop();

void showTitle();
void assignRandomNumber();
void startTimer();
unsigned int inputNumber();
bool isInputValid();
bool isGuessCorrect(const unsigned int &number);
void stopTimer();
void showTimeDuration();
} // namespace GTN

namespace misc {
void print(const std::string &string = "\n");

} // namespace misc
