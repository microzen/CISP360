#include <cmath>
#include <iostream>
using namespace std;

/// @brief Options for user's choice.
enum option {
  MT_ADDTION = 1,
  MT_SUBRACTION,
  MT_MULTIPLICATION,
  MT_DIVISTION,
  MT_QUIT
};

/// @brief to ask users for input a number;
/// @return a number
double inputNumber();

/// @brief to ask users for input to choose a option for calculate.
/// @return 1. Addtion , 2. Subtraction, 3.,
option inputChoice();

/// @brief calculate 2 numbers by user's operator
/// @param num1 number 1
/// @param num2 number 2
/// @param mt_operator operator
/// @return Calculation result
double calculate(double num1, double num2, option mt_operator);

int main(int argc, char const *argv[]) {
  option op;
  double num1, num2;
  do {
    op = inputChoice();
    if (op == MT_QUIT) {
      cout << "Thank you...." << endl;
      break;
    }

    // input and display
    num1 = inputNumber();
    cout << "+" << endl;
    num2 = inputNumber();
    double result = calculate(num1, num2, op);
    cout << "The calculation result is: " << result << endl;
  } while (true);

  return 0;
}

option inputChoice() {
  option op = (option)1;
  // your code
  return op;
}
double calculate(double num1, double num2, option mt_operator) {
  // if (mt_operator == MT_QUIT)
  //   throw "Operator only between 1-4";
  // you code
  double result = 0;
  switch (mt_operator) {
  case MT_ADDTION:
    result = num1 + num2;
    break;
  case MT_SUBRACTION:
    result = num1 - num2;
    break;
  case MT_MULTIPLICATION:
    result = num1 * num2;
    break;
  case MT_DIVISTION:
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