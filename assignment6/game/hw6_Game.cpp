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

// ****computer picks a number *****
int compChoice();
// ****determine the winnner based on input ***
void getWinner(int userChioce, int compChioce);

const string names[3] = {"Rock", "Paper", "Scissors"};
const string actions[3] = {"Smashes", "Wraps", "Cuts"};

int main()
{
	int choice, comp;

	do
	{
		// Computer chooses a number ******
		comp = compChoice();

		// Prints Menu options for the game
		cout << "\n Game Menu " << endl;
		cout << "-----------" << endl;
		cout << " 1) Rock " << endl;
		cout << " 2) Paper " << endl;
		cout << " 3) Scissors " << endl;
		cout << " 4) Quit \n"
			 << endl;

		// Ask user for their choice
		cout << "Enter your choice: ";
		cin >> choice;
		if (choice < 1 || choice > 4)
		{
			cout << "User chioce must be between 1-4." <<endl;
		}
		else if (choice != 4)
		{
			// Display each user's choice
			cout << " You selected:\t" << names[choice - 1] << endl;
			cout << " The computer selected:\t" << names[comp - 1] << endl;

			// Call function to determine winner *****
			getWinner(choice, comp);
		}
	} while (choice != 4);
}

// Function for computer to choose random number
// between 1-3
int compChoice()
{
	srand(time(NULL));
	int randNum = rand() % 3 + 1;
	return randNum;
}

// Function to determine winner
void getWinner(int userChioce, int compChioce)
{
	int user = userChioce;
	int comp = compChioce;
	if (user < 1 || user > 3)
		throw "User chioce must be between 1-3.";
	if (comp < 1 || comp > 3)
		throw "Computer chioce must be between 1-3.";
	bool isWin = false;


	if (user == comp)
	{
		cout << "\n No Winner!" << endl;
		return;
	}
	if (user == 3 && comp == 1)
	{
		isWin = false;
	}
	else if (comp == 3 && user == 1)
	{
		isWin = true;
	}
	else if (user > comp)
	{
		isWin = true;
	}
	else
	{
		isWin = false;
	}

	if (isWin)
	{
		cout << "\n You win! " << names[user - 1] << " " << actions[user - 1] << " " << names[comp - 1] << endl;
	}
	else
	{
		cout << "\n Computer wins! " << names[comp - 1] << " " << actions[comp - 1] << " " << names[userChioce - 1] << endl;
	}
}
