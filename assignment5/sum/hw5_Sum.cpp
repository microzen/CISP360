#include <iostream>
#include <time.h>

using namespace std;

long long sequence(int number);
int inputNumber();
void outputModule(long long result, int number);

int main(int argc, char const *argv[])
{
  clock_t cl;       // clock
  cl = clock(); // start time

  int number;       // user's input
  long long result; // result of calcution
  double seconds;

  number = inputNumber(); // input a number
  result = sequence(number);
  outputModule(result, number);

  cl = clock() - cl; // end time

  // convert clock_t to seconds on the double type.
  seconds = (static_cast<double>(cl)) / CLOCKS_PER_SEC;
  cout << "----------------------------------" << endl;
  cout << "Process exited after "<<seconds<< " seconds with return value 0";

  return 0;
}
/// @brief a sequence to calculate 1 to a number.
/// @param number a number that must greater than 0.
/// @return result
long long sequence(int number)
{
  if (number < 0)
    throw "It can't be a negative number.";
  long long result = 0;
  // result = (h * (h + 1)) / 2;
  for (size_t i = 1; i <= number; i++)
  {
    result += i;
  }
  return result;
}
/// @brief ask user to input a number and the number must greater than 0.
/// @return input result
int inputNumber()
{
  // #TODO: Could you help me to finish the ouput moudle?
  int num;
  do
  {
    cout << "\nPlease input a number greater than 0, then press [Enter]"
         << endl;
    cin >> num;
    if (num < 0)
    {
      cout << "The number must greater than 0" << endl;
      continue;
    }
    return num;
  } while (true);
}

/// @brief Output the result that calcuated
/// @param result The result of the sum
/// @param number The number user inputed
void outputModule(long long result, int number)
{
  // #TODO: Could you help me to finish the ouput moudle?
  cout << "The sum of numbers 1 - " << number << " is " << result << "." << endl;
}