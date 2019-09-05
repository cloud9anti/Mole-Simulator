/*********************************************************************
** Program name:  Final_Project - Menu.cpp
** Author:               Alexander McGrath
** Date:                  06/06/2019
** Description:   Menu.cpp is the Menu implementation file.
**                            
*********************************************************************/



#include <iostream>
#include <string>
#include <vector>

#include "Dungeon.hpp"
#include "Shop.hpp"
#include "Home.hpp"
#include "Island.hpp"
#include "Mine.hpp"
#include "Space.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

/******************************************************************* 
*                      Menu
* This function displays the menu at the start of the game
*******************************************************************/
void menu() {
	//initialize the variables
	int awake = 1;
	int sleepiness = 0;
	int money = 10;
	bool map=0;
	bool claws = 0;
	vector<string> inventory;
	Island* Paradise = new Island();
	Dungeon* Fungeon = new Dungeon();
	Mine* Shiny = new Mine();
	Shop* TopDollar = new Shop();
	Dungeon* Village = new Dungeon();
	Home* Family = new Home();

	//set the pointers to spaces
	Paradise->setBottom(Fungeon);	
	Fungeon->setBottom(Shiny);
	Fungeon->setTop(Paradise);
	Shiny->setTop(Fungeon);
	Shiny->setLeft(TopDollar);
	Shiny->setRight(Village);
	TopDollar->setRight(Shiny);
	Village->setLeft(Shiny);
	Village->setBottom(Family);
	Family->setTop(Village);

	//initialize the starting location
	Space* Location = nullptr;
	Location = Paradise;

	//while the player is awake, loop through the menu
	while (awake) {

		//display the map
		Location->print();

		cout << "Choose an option: " << endl << "w (move up)" << endl << "a (move left)" << endl << "s (move down)" << endl << "d (move right)" << endl << "e (dig)" << endl << "o (quit the game)" << endl << endl;


		//use input validation to ensure that the user selects a valid option

		char choice;

		//the user enters information into the variable input


		cin >> choice;
		cin.clear();

		//if the input is not an appropriate integer, the user is prompted to try again
		while ((choice !='w' && choice !='a' && choice!='s' && choice !='d' && choice !='o' && choice != 'e')) {
				


			//clear the cin
			cin.clear();
			cin.ignore();
			cout << "Please enter w to move up, a to move left, s to move down, and d to move right." << endl;
			cin >> choice;
		} cout << endl;
			
			//increase the sleepiness level every round
			sleepiness +=1;
			//display sleepiness level and other information about the player
			cout << endl << endl << endl << endl << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"Sleepiness level: " << sleepiness << "/30" << endl
			<< "Mole Currency: $" << money << endl << "Inventory: ";

			for (int i = 0; i < (int)inventory.size(); i++)
      cout<< inventory.at(i);
			cout << endl <<
			 "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;

			//display the map if the user has it
			 if (map == 0) {
				cout << endl << endl << endl << endl << endl;
			 } else {
				 cout << "Map:" << endl;

				 cout << "      BEACH" << endl << "        v" << endl << "     DUNGEON" << endl << "        v" << endl  << "SHOP <-MINE-> DUNGEON" << endl << "                v" << endl << "               HOME " <<  endl; 
			 }
		//depending on user input, move or interact with the room
		if (choice == 'w') {
			if (Location->getTop()!= nullptr) {
				Location = Location->getTop();
			} else {

			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"There is nothing to climb here." << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
			}
		}
		if (choice == 'a') {
			if (Location->getLeft()!= nullptr) {
				Location = Location->getLeft();
			} else {
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"There is nothing to the left of you." << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
			}
		}
		if (choice == 's') {


			if (Location->getBottom()!= nullptr) {
				Location = Location->getBottom();
			} else {
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"There is nothing below you." << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
			}
		
		}
		if (choice == 'd') {

			if (Location->getRight()!= nullptr) {
				Location = Location->getRight();
			} else {
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"There is nothing to the right of you." << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
			}
		}
		if (choice == 'e') {
			if (Location->getLocation() == 0) {
				if (inventory.size() >4) {
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"Your inventory is full! You cannot take the map..." << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
					} else if (map == 0) {
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"You dig in the sand and find a map in a bottle! Now you can see where all the rooms are." << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
					map = 1;
					inventory.push_back("-map- ");
				} else {
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"You dig in the sand and find an empty bottle! It's better to leave it there..." << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
					map = 1;
				}

			}	else if (Location->getLocation() == 1) {
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"You dig in the dungeon and find 2 units of Mole Currency! It's a bit tiring." << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
					money+=2;
			}	else if (Location->getLocation() == 2) {
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"You dig in the mine and find a whopping 5 units of Mole Currency! Where can this be spent!?" << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
					money+=5;
			} else if (Location->getLocation() == 3) {
				if (money <10) {

					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"You need 10 coins to purchase an item." << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;

				//if the inventory is full, do not allow the user to purchase an item
				} else if (inventory.size() >4) {
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"Your inventory is full! You cannot buy any more items..." << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
					} else if (claws == 0) {
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"You purchase some claw oil for $10. This will help you dig." << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
					claws = 1;
					money-=10;
					inventory.push_back("-claw oil- ");
				} else {
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"You purchase some insects for $10. Yummy! Your excitement to go home and eat them gives you some energy." << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; 
					money -=10;
					sleepiness=5;
					inventory.push_back("-bag of bugs- ");
				}
			} else if (Location->getLocation() == 4) {
				if (claws == 1) {
					//the user successfully wins the game
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"Congratulations!!! You made it back to your family and can finally get some rest..." << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; 
					awake = 0;
				} else {
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"You cannot dig here! Try to find some claw oil. " << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; 
				}
			}
		}

		if (choice == 'o') {
			awake = 0;
		}

		//if the mole becomes too sleepy, the game is over and a special message is displayed.
		if (sleepiness == 30) {
			awake = 0;
				if (Location->getLocation() == 0) {
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"You have fallen asleep. Some tourists on the beach take flash photography of you and your vision is worse than before! Game over!" << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
				} 
				else if (Location->getLocation() == 4) {
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"You have fallen asleep. You were so close to home... perhaps you should try again!" << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
				}	
					else {
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"You have fallen asleep. Now you are in grave danger underground. Game over!" << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
				}
		}



	}

	//clear the memory
	delete Paradise;
	delete Fungeon;
	delete Shiny;
	delete TopDollar;
	delete Village;
	delete Family;


	//exit the menu function	
	cout << "Exiting program..." << endl;
}