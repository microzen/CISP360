/*****************************************************
Student name: Regina Gil, Yezhi Wu
Student ID: w1468676 , w1761432
Course #: CISP360
Section #: 16659
Instruction mode: Online
*****************************************************
Assignment #8 -  Lottery Winners Modification
Source file name: hw8_LotteryWinners_Modification.cpp
Program description: A program that lets the player 
enter this week’s winning 5-digit number. Then using 
binary search, reports whether or not one of the 
tickets is a winner this week. 
*****************************************************/
#include <iostream>
using namespace std;

const int NUMSIZE = 10;

bool isWinByBinarySearch(const int[], int, int);

int main(int argc, char const *argv[])
{
  int input; 
  int NUMBERS[NUMSIZE] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
  
  cout << "Please enter this week's 5-digit winning lottery number: ";
  cin >> input;  

  bool isWin = isWinByBinarySearch(NUMBERS, NUMSIZE, input);

  //Display if the ticket won or not
  if (isWin)
  {
      cout << "You have a winning ticket." << endl;
  }
  else
  {
      cout << "You did not win this week." << endl;
  }
  return 0;
}

// Binary search fxn
bool isWinByBinarySearch(const int nums[], int size, int value)
{
  bool found = false;
  int first = 0;
  int middle;
  int last = size - 1;  
  
  while (!found && first <= last)  
  {
    middle = (first + last) / 2;

    if (nums[middle] == value)  
    {
      found = true;
    }
    else if (nums[middle] > value)
    {
      last = middle - 1;
    }
    else
    {
      first = middle + 1;
    }  
  }
  return found;
  return -1;
}