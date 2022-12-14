
/*****************************************************
Student name: Yezhi Wu
Student ID: w1761432
Course #: CISP360
Section #: 25324 & 24499
Instruction mode: Online or Hybrid
*****************************************************
Assignment #2 (ch2) - Average
Source file name: hw2_average.cpp
Program description: To calculate the average of 5 numbers.
*****************************************************/

#include "iostream"
using namespace std;
int main(int argc, char const *argv[]) {
  // init, declare and assgin values
  double num1 = 28;
  double num2 = 32;
  double num3 = 37;
  double num4 = 24;
  double num5 = 33;

  // output
  cout << "Number 1: " << num1 << endl;
  cout << "Number 2: " << num2 << endl;
  cout << "Number 3: " << num3 << endl;
  cout << "Number 4: " << num4 << endl;
  cout << "Number 5: " << num5 << endl;
  // avg
  double avg = (num1 + num2 + num3 + num4 + num5) / 5.0;
  cout << "Average: " << avg << endl;
  return 0;
}
