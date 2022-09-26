/*****************************************************
Student name: Regina Gil, Yezhi Wu
Student ID: w1468676 , w1761432
Course #: CISP360
Section #: 16659
Instruction mode: Online
*****************************************************
Assignment #5 -  Math Tutor
Source file name: hw5_MathTutor.cpp
Program description: Display a menu to allow the user to select an addition, subtraction, multiplication, or division problem. The final selection on the menu should let the user quit the program. After the user has finished the math problem, the program should display the menu again. This process is repeated until the user chooses to quit the program.
*****************************************************/
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

/// @brief Options of user's choice.
enum option {
  MT_ADDITION = 1,
  MT_SUBTRACTION,
  MT_MULTIPLICATION,
  MT_DIVISION,
  MT_QUIT
};

const int MAX_RAND = 999;
const int MIN_RAND = 1;

option choiceModule();
bool checkModule(option mt_operator);
// double calculate(double num1, double num2, option mt_operator);

int main(int argc, char const *argv[]) {
  option op;
  double num1, num2;
  double input;
  do {
    op = choiceModule();
    if (op == MT_QUIT) // if input is 5, quit
    {
      cout << "Thank you for using Math Tutor." << endl;
      break;
    }
    checkModule(op);
  } while (true);

  return 0;
}

/// @brief To ask users for input to choose an option for calculation.
/// @return 1.Addition , 2.Subtraction, 3.Multiplication, 4.Division, 5.Quit,
option choiceModule() {
  // #TODO: choice module
  int input;
  cout << "\n\tMath Tutor Menu" << endl;
  cout << "----------------------------" << endl;
  cout << "1. Addition Problem" << endl;
  cout << "2. Subtraction Problem" << endl;
  cout << "3. Multiplication Problem" << endl;
  cout << "4. Division Problem " << endl;
  cout << "5. Quit Program " << endl;
  cout << "----------------------------" << endl;

  do {
    input = 0;
    cout << "Input your choice, then press [Enter]: ";
    cin >> input;
    cin.clear(); // clear input for the illegal number.
    cin.ignore(100, '\n');
    if (input >= 1 && input <= 5) {
      // if input is 1-5, stop the loop
      break;
    }
    cout << "\nThe valid choices are 1-5. Please try again." << endl;
  } while (true);

  return static_cast<option>(input);
}

/// @brief Get a random divisible number
/// @param number
/// @return
int randDivisible(int number) {
  int divisibles[number / 2 + 1];
  int langht = 0;
  divisibles[langht++] = number;
  for (size_t i = MIN_RAND; i <= (number / 2); i++) {
    if (number % i == 0) {
      divisibles[langht] = i;
      langht++;
    }
  }
  return divisibles[rand() % langht];
}

/// @brief calculate 2 numbers by user's operator
/// @param num1 number 1
/// @param num2 number 2
/// @param mt_operator operator
/// @return Calculation result
double calculate(double num1, double num2, option mt_operator) {
  // if (mt_operator == MT_QUIT)
  //   throw "Operator only between 1-4";
  // you code
  double result = 0;
  switch (mt_operator) {
  case MT_ADDITION:
    result = num1 + num2;
    break;
  case MT_SUBTRACTION:
    result = num1 - num2;
    break;
  case MT_MULTIPLICATION:
    result = num1 * num2;
    break;
  case MT_DIVISION:
    if (num2 == 0) {
      throw "The denominator can not be zero.";
    }
    result = num1 / num2;
    break;
  default:
    throw "Operator only between 1-4";
    break;
  }
  return result;
}

/// @brief To ask users to input a number then check the result;
/// @return isCorrect
bool checkModule(option mt_operator) {
  const char operators[4] = {'+', '-', '*', '/'};

  // random numbers
  int num1, num2;
  int user_answer; // answer
  srand(time(NULL));
  num1 = rand() % (MAX_RAND - MIN_RAND) + MIN_RAND;
  if (mt_operator == MT_DIVISION) {
    num2 = randDivisible(num1);
  } else {
    num2 = (rand() % (MAX_RAND - MIN_RAND)) + MIN_RAND;
  }

  if (num2 > num1) {
    throw "number 2 > 1";
  }

  double result = calculate(num1, num2, mt_operator); // calculation

  // input answer and display info
  cout << setw(5) << num1 << "\n" << operators[mt_operator - 1];
  cout << setw(4) << num2 << endl;
  cout << "----------------------------" << endl;
  cin >> user_answer;

  if (result == user_answer) {
    cout << "\nCongratulations! That's right." << endl;
    return true;
  } else {
    cout << "\nSorry, the correct answer is : " << result << endl;
    return false;
  }
  cin.clear();
  cin.ignore(100, '\n');
}
