/*****************************************************
Student name: Regina Gil, Yezhi Wu
Student ID: w1468676 , w1761432
Course #: CISP360
Section #: 16659
Instruction mode: Online
*****************************************************
Assignment #7 -  Largest/Smallest Array Values
Source file name: hw7_LargestSmallest.cpp
Program description: A program that prompts the user
to enter 10 values into an array. The program then 
displays the largest and smallest values stored 
in the array.
*****************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

const int NUM = 10;

void calc_val(int value[NUM]);

int main() {
  int value[NUM];

  cout << "\nThis program will ask you to ";
  cout << "\nenter ten values, then it will ";
  cout << "\ndetermine the largest and smallest";
  cout << "\nof the values you entered.\n";

  for (int i = 0; i < NUM; i++ ){

    cout << "\nEnter an integer value: ";
    cin >> value[i];    
  }// end for loop

  calc_val(value);
  return 0;
  
}// end main

//
// Function that finds the largest and smallest
// values from user input
//
void calc_val(int value[NUM]){
  int small = value[0];
  int big = 0;

  for (int i = 0; i < NUM; i++){
    if (value[i] < small){
      small = value[i];
    }
    if (value[i] > big){
      big = value[i];
    }
  }

  // Display results
  cout << "\nThe largest value entered is " << big;
  cout << "\nThe smallest value entered is " << small << endl;
}