/*****************************************************
Student name: Regina Gil, Yezhi Wu
Student ID: w1468676 , w1761432
Course #: CISP360
Section #: 16659
Instruction mode: Online
*****************************************************
Assignment #6 -  Game
Source file name: hw6_Game.cpp
Program description: A program that ets the user play 
the game of Rock, Paper, Scissors against the computer
Then displays the account's future value
*****************************************************/

#include <iostream>

using namespace std;

void compChoice(); // ****computer picks a number *****
void getWinner(); // ****determine the winnner based on input ***

int main() {
	int choice, comp;

	do {
		// Computer chooses a number ******


		// Prints Menu options for the game
		cout << "\n Game Menu " << endl;
		cout << "-----------" << endl;
		cout << " 1) Rock " << endl;
		cout << " 2) Paper " << endl;
		cout << " 3) Scissors " << endl;
		cout << " 4) Quit \n" << endl;

		// Ask user for their choice
		cout << "Enter your choice: ";
		cin >> choice;

    if( choice != 4){
      //Display each user's choice
  		cout << " You selected: " << choice << endl;
  		cout << " The computer selected: " << comp << endl;

		  // Call function to determine winner *****

      
    }		
	} while (choice != 4);	
}

// Function for computer to choose random number
// between 1-3
void compChoice(int comp) {
	
}

// Function to determine winner
void getWinner() {
	
}