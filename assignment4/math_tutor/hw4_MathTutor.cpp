/*****************************************************
Student name: Regina Gil, Yezhi Wu
Student ID: w1468676 , w1761432
Course #: CISP360
Section #: 16659
Instruction mode: Online
*****************************************************
Assignment #4 -  Math Tutor
Source file name: hw4_MathTutor.cpp
Program description: A program that displays two random
numbers to be added and waits for user to input answer.
Displays a message with correct answer.
*****************************************************/
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
  int r1, r2;
  int sum;
  srand(time(NULL));
  r1 = rand() % 999 + 1; 
  
  // 9234273947%1 = 0
  // 9234273947%10 = 7
  // 9234273947%100 = 47
  // 9234273947%1000 = 947
  // 9234273947%999 = 464
  
  // Number%999+1 = random(0 to 998) +1 = 1 to 999
  // (999*2-1)%999 = 998;
  // (999*3-1)%999 = 998;
  // (999*4-1)%999 = 998;
  // (999*n - 1)%999=998;
  // 998%999 = 998
  // 999%999 =0
  
  r2 = rand() % 999 + 1;
  cout << setw(5) << r1 << "\n+" << setw(3) << r2 << endl;
  cout << "-------" << endl;
  cout << "\nEnter your answer here: ";
  cin >> sum;
  
  if (sum == (r1 + r2)) {
    cout << "\nCongratulations!" << endl;
    cout << "The answer is " << (r1 + r2) << endl;
  } else {
    cout << "\nSorry, that is incorrect." << endl;
    cout << "The correct answer is " << (r1 + r2) << endl;
  }
}