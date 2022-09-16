/*****************************************************
Student name: Regina Gil, Yezhi Wu
Student ID: w1468676 , w1761432
Course #: CISP360
Section #: 16659
Instruction mode: Online
*****************************************************
Assignment #4 - BMI
Source file name: hw4_BMI.cpp
Program description: A program that calculates a 
user's BMI based on their entered weight in pounds and
height in inches. Displays a message indicating if the
user's weight is optimal, underweight or overweight
based on BMI
*****************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double	weight,
			height,
			BMI;
	cout << "Enter your weight in pounds: ";
	cin >> weight;

	cout << "Enter your height in inches: ";
	cin >> height;

	BMI = weight * (703 / (height * height));

	cout << "Your BMI is " << BMI << endl;

	if (BMI > 18.5 && BMI < 25)
		cout << "Congratulations! Your weight is optimal." << endl;
	
	else if (BMI < 18.5) 
		cout << "You are underweight. ;-; " << endl;
	
	else 
		cout << "You are overweight >.<" << endl;
	
	return 0;
}