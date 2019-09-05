/*********************************************************************
** Program name:  Final_Project - Dungeon.cpp
** Author:               Alexander McGrath
** Date:                  06/06/2019
** Description:   Dungeon.cpp is the Dungeon class implementation file.
**                            
*********************************************************************/

#include "Dungeon.hpp"
#include "Shop.hpp"
#include "Home.hpp"
#include "Island.hpp"
#include "Mine.hpp"
#include <string>
#include <iostream>


using std::string;
using std::cin;
using std::cout;
using std::endl;

/******************************************************************* 
*                      Dungeon::Dungeon
* This function creates the Dungeon object
*******************************************************************/

Dungeon::Dungeon() {

	location = 1;

	
}

/******************************************************************* 
*                      Dungeon::Print
* This function prints the dungeon map
*******************************************************************/
void Dungeon::print() {

	//display the user their location
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"You peer into a dungeon... it is man-made. You will need to find a hole to get out!" << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl << endl;

	//draw the location image and the mole
	for (int i = 0; i<18; i++) {
		for (int j = 0; j<44; j++) {
			if ((j== 16 || j == 27) && i> 5 && i<14) {
				cout << "|";
			} else if (j>16 && j<27 && (i == 14 || i==5)){
				cout << "~";
			} else if ((j==18 || j==25) && i == 4){
				cout << "M";
			} else if (i>5 && i< 14 && j > 16 && j < 27) {
				cout << ".";
			} else if ((i==5 || i==14) && ( j==28)) {
				cout << "/";
			} else if ((i==5 || i== 14) && (j==15)){
				cout << "\\";
			}
			else {
					cout << "*";
			}

		}
		cout << endl;
	}
	cout << endl << endl;
	
}

/******************************************************************* 
*                      Dungeon::setBottom
* This function sets the bottom pointer to Space
*******************************************************************/
void Dungeon::setBottom(Space* Bot) {

	bottom = Bot;
	
}

/******************************************************************* 
*                      Dungeon::getBottom
* This function sets the bottom pointer to Space
*******************************************************************/
Space* Dungeon::getBottom() {

	return bottom;
	
}
/******************************************************************* 
*                      Dungeon::setTop
* This function sets the top pointer to Space
*******************************************************************/
void Dungeon::setTop(Space* Top) {

	top = Top;
	
}

/******************************************************************* 
*                      Dungeon::getTop
* This function sets the top pointer to Space
*******************************************************************/
Space* Dungeon::getTop() {

	return top;
	
}
/******************************************************************* 
*                      Dungeon::setRight
* This function sets the right pointer to Space
*******************************************************************/
void Dungeon::setRight(Space* Right) {

	right = Right;
	
}

/******************************************************************* 
*                      Dungeon::getRight
* This function sets the right pointer to Space
*******************************************************************/
Space* Dungeon::getRight() {

	return right;
	
}
/******************************************************************* 
*                      Dungeon::setLeft
* This function sets the left pointer to Space
*******************************************************************/
void Dungeon::setLeft(Space* Left) {

	left = Left;
	
}

/******************************************************************* 
*                      Dungeon::getLeft
* This function sets the left pointer to Space
*******************************************************************/
Space* Dungeon::getLeft() {

	return left;
	
}
/******************************************************************* 
*                      Dungeon::getLocation
* This function returns an integer that specifies its location
*******************************************************************/
int Dungeon::getLocation() {

	return location;

}
/***************************************************** 
*                      Destructor
* This is the destructor for the Dungeon
*******************************************************************/
	Dungeon::~Dungeon() {

	}