/*****************************************************
Student name: Regina Gil, Yezhi Wu
Student ID: w1468676 , w1761432
Course #: CISP360
Section #: 16659
Instruction mode: Online
*****************************************************
Assignment #10 -  Pointer Rewrite
Source file name: hw10_PointerRewrite.cpp
Program description: A program that has a function that
uses pointers instead of reference variables

Original FXN w/ reference variables: 
int doSomething(int &x, int &y)
{
   int temp = x;
   x = y * 10;
   y = temp * 10;
   return x + y;
}
*****************************************************/
#include <iostream>
using namespace std;

int doSomething(int *x, int *y)
{
   int temp = *x;
   *x = *y * 10;
   *y = temp * 10;
   return *x + *y;
}

int main() {
  int x = 5;
  int y = 10;
  cout << doSomething(&x, &y) << endl;
  
}