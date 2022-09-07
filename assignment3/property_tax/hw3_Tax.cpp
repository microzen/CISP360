/*****************************************************
Student name: Yezhi Wu, Regina Gil 
Student ID: w1761432, w1468676
Course #: CISP360
Section #: 16659
Instruction mode: Online
*****************************************************
Assignment #3 - Property Tax
Source file name: hw3_Tax.cpp
Program description: A program that asks for the actual 
value of a piece of property and displays the assessment 
value and property tax.
*****************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    double property_value,
           asmt_value,
           property_tax;

    cout << "Enter the actual value of the property: ";
    cin >> property_value;
  
    asmt_value = property_value * 0.6;
    property_tax = (asmt_value / 100) * 0.75;
    
    cout << setprecision(2) << fixed;
    cout << "\nAssesment Value: $" << setw(10) << asmt_value;
    cout << "\nProperty Tax:    $" << setw(10) << property_tax << endl;
    return 0;
}