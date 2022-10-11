/*****************************************************
Student name: Regina Gil, Yezhi Wu
Student ID: w1468676 , w1761432
Course #: CISP360
Section #: 16659
Instruction mode: Online
*****************************************************
Assignment #6 -  Future Value
Source file name: hw6_FutureValue.cpp
Program description: A program that prompts the user
to enter the account’s present value, monthly interest
rate, and the number of months that the money will be
left in the account.
Then displays the account's future value
*****************************************************/
#include <iostream>
#include <cmath>

using namespace std;

double futureValue(int presentValue, double rate, int months); 

int main()
{
	int P, t;
	double i, F;
	char again;

	do
	{
		// Ask user for information
		cout << "\nWhat is the present value of the account? ";
		cin >> P;

		cout << "What is the monthly interest rate? ";
		cin >> i;

		cout << "For how many months will the money be left in the account? ";
		cin >> t;

		// Call function futureValue
		F = futureValue(P, i, t); 

		// Display result based on calculations
		cout << "The account's future value is $" << F << "." << endl;

		// Ask user if they want to try other values
		cout << "Want to try another set of values? (y = yes) : ";
		cin >> again;

	} while (again == 'y' || again == 'Y'); // Loop if user entered y or Y
	return 0;
}

//
// Function that calculates the future value of an account
// after a specified period of time
//
double futureValue(int presentValue, double rate, int times)
{ // **** interest rate ****
	return presentValue * pow((1 + rate), times);
}