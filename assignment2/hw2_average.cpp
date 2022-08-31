
#include "iostream"
using namespace std;
int hw2_average(int argc, char const *argv[]) {
  // init, declare and assgin values
  double num1 = 28;
  double num2 = 32;
  double num3 = 37;
  double num4 = 24;
  double num5 = 33;

  // output
  cout << "Number 1: " << num1 << endl;
  cout << "Number 1: " << num2 << endl;
  cout << "Number 1: " << num3 << endl;
  cout << "Number 1: " << num4 << endl;
  cout << "Number 1: " << num5 << endl;
  // avg
  double avg = (num1 + num2 + num3 + num4 + num5) / 5.0;
  cout << "Average: " << avg << endl;
  return 0;
}
