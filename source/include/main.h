#include <string>

namespace GTN {
extern unsigned int number;
extern unsigned int numberUser;
extern unsigned int numberOfTries;

void guessLoop();

void showTitle();
void assignRandomNumber();
unsigned int inputNumber();
bool isInputValid();
bool isGuessCorrect(const unsigned int &number);
} // namespace GTN

namespace misc {
void print(const std::string &string = "\n");

} // namespace misc
