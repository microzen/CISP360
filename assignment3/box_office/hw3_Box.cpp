/*****************************************************
Student name: Regina Gil, Yezhi Wu
Student ID: w1468676, w1761432
Course #: CISP360
Section #: 16659
Instruction mode: Online
*****************************************************
Assignment #3 - Box Office
Source file name: hw3_Box.cpp
Program description: The program asks for the name of 
the movie, and how many adult and child tickets were 
sold. Calculates a theater’s gross and net box office 
profit for a night. Then displays Movie name, tickets 
sold, gross box office profit, net profit, and amount 
paid to distributor.
*****************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    double  adult_ticket,
            child_ticket,
            gross_profit,
            net_profit,
            amt_paid;
    string  movie;       


    cout << "Enter the name of the movie: " ;
    getline(cin, movie);

    cout << "Enter the number of adult tickets sold: ";
    cin >> adult_ticket;

    cout << "Enter the number of child tickets sold: ";
    cin >> child_ticket;

    gross_profit = (adult_ticket * 10.00) + (child_ticket * 6.00);
    net_profit = gross_profit * 0.20;
    amt_paid = gross_profit - net_profit;

    cout << "\nRevenue Report" << endl;
    cout << "==============" << endl;
    
    cout << left << setw(29) << "Movie Name: "  << '"' << movie << '"' << endl;
    cout << left << setw(34) << "Adult Tickets Sold: " << adult_ticket << endl;
    cout << left << setw(34) << "Child Tickets Sold: " << child_ticket << endl;
    cout << setprecision(2) << fixed;  
    cout << left << setw(28) << "Gross Box Office Profit: " << "$ " << right << setw(7) << gross_profit << endl;
    cout << left << setw(28) << "Net Box Office Profit: " << "$ " << right << setw(7) << net_profit << endl;
    cout << left << setw(28) << "Amount Paid to Distributor: " << "$ " << right << setw(7) << amt_paid << endl;
  return 0;
}