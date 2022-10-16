#include <iomanip>
#include <iostream>
#include <limits.h>
using namespace std;

const string WEEKS[] = {"Sunday",   "Monday", "Tuesday", "Wednesday",
                        "Thursday", "Friday", "Saturday"};
const int MONKEY_SIZE = 3;
const int WEEK_SIZE = sizeof(WEEKS) / sizeof(string);

int inputAmountOfFood();
void outputInfo(int monkeysFood[WEEK_SIZE][MONKEY_SIZE]);

int main(int argc, char const *argv[]) {
  // analyse the array's structure

  // memory locations are contunious
  int monkeysFood[WEEK_SIZE][MONKEY_SIZE];

  int *loop = &monkeysFood[0][0];
  int *end = &monkeysFood[WEEK_SIZE - 1][MONKEY_SIZE - 1];

  do {
    // end location - loop location + 1 = the index of (week size * monkey size)

    // memories for example:
    // monkeysFood[0][0] = 0x7ffd4bb7f0c0
    // monkeysFood[0][1] = 0x7ffd4bb7f0c4
    // monkeysFood[0][2] = 0x7ffd4bb7f0c8
    // monkeysFood[1][0] = 0x7ffd4bb7f0cc
    // monkeysFood[1][0] = 0x7ffd4bb7f0d0
    // int has 4 bytes(32 bits)
    // *loop and *end are int pointers, they have 4 bytes
    // but loop - end is not equse 4 becuase operators in pointers are different
    // for example loop++ == loop's location + 4(int bytes)

    // more info about pointers
    // https://cplusplus.com/doc/tutorial/pointers#arithmetics

    int weekIndexCircle = WEEK_SIZE - (((end - loop)) / MONKEY_SIZE) - 1;
    int monkeyIndexCircle =
        ((MONKEY_SIZE * WEEK_SIZE) - (end - loop) - 1) % MONKEY_SIZE;

    cout << "\n--------------------------" << endl;
    cout << "Memory Location:" << loop << endl;
    cout << "Monkey #" << (monkeyIndexCircle + 1);
    cout << "\t" << WEEKS[weekIndexCircle] << endl;

    *loop = inputAmountOfFood();

    if (loop == end)
      break;
    loop++;
  } while (1);

  outputInfo(monkeysFood);
  return 0;
}
void outputInfo(int monkeysFood[WEEK_SIZE][MONKEY_SIZE]) {
  double avg;
  int sun = 0;
  int least = INT_MAX, greatest;
  cout << "\n\nINFO\n----------------------------------------------------\n";
  cout << setw(14) << "Weeks";
  cout << setw(14) << "Monkey #1";
  cout << setw(14) << "Monkey #2";
  cout << setw(14) << "Monkey #3";

  for (size_t i = 0; i < WEEK_SIZE; i++) {
    cout << "\n";
    cout << setw(14) << WEEKS[i];
    for (size_t j = 0; j < MONKEY_SIZE; j++) {

      if (monkeysFood[i][j] < least) {
        least = monkeysFood[i][j];
      }
      if (monkeysFood[i][j] > greatest) {
        greatest = monkeysFood[i][j];
      }
      sun += monkeysFood[i][j];
      cout << setw(14) << monkeysFood[i][j];
    }
  }
  avg = sun / (WEEK_SIZE * MONKEY_SIZE);
  cout << "\n----------------------------------------------------\n";
  cout << "\nThe average amount of food eaten per day by the whole family of "
          "monkeys is:"
       << avg;
  cout << "\nThe least amount of food eaten during the week by any one monkey "
          "is:"
       << least;
  cout << "\nThe greatest amount of food eaten during the week by any one "
          "monkey is:"
       << greatest << endl;
}

int inputAmountOfFood() {
  // return rand() % 100 + 1; // test
  int quantity = 0.0;
  do {
    cout << "Please type the number numbers for pounds of food:";
    cin >> quantity;
    if (quantity <= 0) {
      cout << "Invalid (negative) food quantity -- re-enter:" << endl;
      continue;
    }
    break;
  } while (1);
  return quantity;
}
