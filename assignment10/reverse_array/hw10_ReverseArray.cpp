/*****************************************************
Student name: Regina Gil, Yezhi Wu
Student ID: w1468676 , w1761432
Course #: CISP360
Section #: 16659
Instruction mode: Online
*****************************************************
Assignment #10 -  Reverse Array
Source file name: hw10_ReverseArray.cpp
Program description: A program that has a function that
creates a copy of an array with the values reversed. It
returns a pointer to the new array
*****************************************************/
#include <iostream>

using namespace std;

int *reverseCopy(int array[], int size) {

  int *revArray = new int[size];
  int j = 0;

  for (int i = size - 1; i >= 0; i--, j++) {
    revArray[j] = array[i];
  }

  return revArray;
}

int main() {
  const int size = 7;
  int array[size] = {1, 2, 3, 4, 5, 6, 7};

  int *arrayPtr = array;

  // Print Original Array
  cout << "Original Array is: \n";
  for (int i = 0; i < size; i++) {
    cout << arrayPtr[i] << " ";
  }
  cout << endl;

  // Print Reversed Array
  cout << "\nReversed Array is: \n";
  arrayPtr = reverseCopy(arrayPtr, size);
  for (int i = 0; i < size; i++) {
    cout << arrayPtr[i] << " ";
  }
  cout << endl;
  return 0;
}
