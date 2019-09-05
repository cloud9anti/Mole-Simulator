/*********************************************************************
** Program name:  Final_Project - main.cpp
** Author:               Alexander McGrath
** Date:                  06/06/2019
** Description:   This project has six space objects each with four pointers to space objects. There are five types of rooms which are represented by space objects. The user will play as a mole and try to find money and items in order to go home and find his family. The user will be able to move around and interact with each room. The user can add items to the inventory which has a maximum of five slots. There is also a menu option for the user to quit at any time.
**                            
*********************************************************************/


#include <iostream>
#include <string>


#include "Menu.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main() {

	//display initial message
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl << "You are a mole trapped on an exotic beach. Your goal is to dig deep underground and find your family. However, the island is inhabited by scary humans and it will not be as easy as you think... You have a mole knapsack that can hold 5 items. Watch out, if your sleepiness level reaches 30, you will fall asleep!" << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl << endl;
	//run the game

	bool runGame = 0;
	while (runGame == 0) {

		menu();

		//ask the user if they want to run the game again.
		cout << "...unless you want to play again?" << endl;

		cout << "1. Play again" << endl << "2. Quit" << endl;


		//use input validation to ensure that the user selects 1 or 2.

		int choice;

		//the user enters information into the variable input


		cin >> choice;
		cin.clear();

		//if the input is not an appropriate integer, the user is prompted to try again
		while ((choice !=1 && choice !=2)) {

			//clear the cin
			cin.clear();
			cin.ignore();
			cout << "Please enter 1 or 2." << endl;
			cin >> choice;
		} cout << endl;

		if (choice == 2) {
			runGame = 1;
		}
			
	}

	cout << "Program Terminated" << endl;
}