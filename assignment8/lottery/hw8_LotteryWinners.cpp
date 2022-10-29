/*****************************************************
Student name: Regina Gil, Yezhi Wu
Student ID: w1468676 , w1761432
Course #: CISP360
Section #: 16659
Instruction mode: Online
*****************************************************
Assignment #8 -  Lottery Winners
Source file name: hw8_LotteryWinners.cpp
Program description: A program that lets the player 
enter this week’s winning 5-digit number. Then using
linear search, reports whether or not one of the 
tickets is a winner this week. 
*****************************************************/
#include <iostream>
using namespace std;

#define NUMSIZE 10
const int NUMBERS[NUMSIZE] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
bool isWinByLinearSearch(int);

int main(int argc, char const *argv[])
{
    int input;
    cout << "Please enter this week's 5-digit winning lottery number: ";
    cin >> input;
  
    bool isWin = isWinByLinearSearch(input);
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

// Linear search function
bool isWinByLinearSearch(int item)
{
    for (size_t i = 0; i < NUMSIZE; i++)
    {
        if (NUMBERS[i] == item)
        {
            return true;
        }
    }
    return false;
}
