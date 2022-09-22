#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

/// @brief Options for user's choice.
enum option
{
  MT_ADDTION = 1,
  MT_SUBRACTION,
  MT_MULTIPLICATION,
  MT_DIVISTION,
  MT_QUIT
};
const char operators[4] = {'+', '-', '*', '/'};

/// @brief to ask users for input a number and check the result;
/// @return isCorret
bool checkModule(option mt_operator);

/// @brief to ask users for input to choose a option for calculate.
/// @return 1. Addtion , 2. Subtraction, 3.,
option choiceModule();

/// @brief calculate 2 numbers by user's operator
/// @param num1 number 1
/// @param num2 number 2
/// @param mt_operator operator
/// @return Calculation result
double calculate(double num1, double num2, option mt_operator);

int main(int argc, char const *argv[])
{
  option op;
  double num1, num2;
  double input;
  do
  {
    op = choiceModule();
    if (op == MT_QUIT)
    {
      cout << "Thank you...." << endl;
      break;
    }
    checkModule(op);
  } while (true);

  return 0;
}

option choiceModule()
{
  int input;
  do
  {
    input = 0;
    cout << "\n\tMath Tutor Menu" << endl;
    cout << "----------------------------" << endl;
    cout << "1. Addition Problem" << endl;
    cout << "2. Subtraction Problem" << endl;
    cout << "3. Multiplication Problem" << endl;
    cout << "4. Division Problem " << endl;
    cout << "5. Quit Program " << endl;
    cout << "----------------------------" << endl;
    cout << "Input your choice, then press [Enter]: ";
    cin >> input;
    if (input >= 1 && input <= 4)
    {
      break;
    }
    cout << "\nThe valid choices are 1-5. Pleace try again." << endl;
    cin.clear();
    cin.ignore(100, '\n');
  } while (true);

  return (option)input;
}

bool checkModule(option mt_operator)
{
  int num1 = rand() % 989 + 10;
  int num2 = rand() % 989 + 10;
  int input;
  double result = calculate(num1, num2, mt_operator);
  // input and display
  cout << setw(5) << num1 << "\n"
       << operators[mt_operator - 1];
  cout << setw(4) << num2 << endl;
  cout << "----------------------------" << endl;
  cin >> input;

  if (result == input)
  {
    cout << "\nCongratulations! That's right." << result << endl;
    return true;
  }
  else
  {
    cout << "\nSorry, the correct answer is : " << result << endl;
    return false;
  }
  cin.clear();
  cin.ignore(100, '\n');
}

double calculate(double num1, double num2, option mt_operator)
{
  // if (mt_operator == MT_QUIT)
  //   throw "Operator only between 1-4";
  // you code
  double result = 0;
  switch (mt_operator)
  {
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
    if (num2 == 0)
    {
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