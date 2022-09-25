#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

/// @brief Options of user's choice.
enum option
{
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

int main(int argc, char const *argv[])
{
  option op;
  double num1, num2;
  double input;
  do
  {
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

/// @brief To ask users for input to choose a option for calculate.
/// @return 1.Addition , 2.Subtraction, 3.Multiplication, 4.Division, 5.Quit,
option choiceModule()
{
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

  do
  {
    input = 0;
    cout << "Input your choice, then press [Enter]: ";
    cin >> input;
    if (input >= 1 && input <= 5)
    {
      // if input is 1-5, stop to loop
      break;
    }
    cout << "\nThe valid choices are 1-5. Please try again." << endl;

    cin.clear(); // clear input for the illegal number.
    cin.ignore(100, '\n');

  } while (true);

  return static_cast<option>(input);
}

/// @brief Get a random divisible number
/// @param number
/// @return
int randDivisible(int number)
{
  int divisibles[number / 2];
  int langht = 0;
  for (size_t i = MIN_RAND; i < number / 2; i++)
  {
    if (number % i == 0)
    {
      divisibles[langht] = i;
      langht++;
    }
  }
  divisibles[++langht] = number;

  return divisibles[rand() % langht];
}

/// @brief calculate 2 numbers by user's operator
/// @param num1 number 1
/// @param num2 number 2
/// @param mt_operator operator
/// @return Calculation result
double calculate(double num1, double num2, option mt_operator)
{
  // if (mt_operator == MT_QUIT)
  //   throw "Operator only between 1-4";
  // you code
  double result = 0;
  switch (mt_operator)
  {
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

/// @brief To ask users to input a number then check the result;
/// @return isCorret
bool checkModule(option mt_operator)
{
  const char operators[4] = {'+', '-', '*', '/'};

  // random numbers
  int num1, num2;
  int user_answer; // answer
  srand(time(NULL));
  num1 = rand() % (MAX_RAND - MIN_RAND) + MIN_RAND;
  if (mt_operator == MT_DIVISION)
  {
    num2 = randDivisible(num1);
  }
  else
  {
    num2 = (rand() % (MAX_RAND - MIN_RAND)) + MIN_RAND;
  }

  double result = calculate(num1, num2, mt_operator); // calculation

  // input answer and display info
  cout << setw(5) << num1 << "\n"
       << operators[mt_operator - 1];
  cout << setw(4) << num2 << endl;
  cout << "----------------------------" << endl;
  cin >> user_answer;

  if (result == user_answer)
  {
    cout << "\nCongratulations! That's right." << endl;
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
