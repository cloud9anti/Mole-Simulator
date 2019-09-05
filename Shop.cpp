/*********************************************************************
** Program name:  Final_Project - Shop.cpp
** Author:               Alexander McGrath
** Date:                  06/06/2019
** Description:   Shop.cpp is the Shop class implementation file.
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
*                      Shop::Shop
* This function creates the Shop object
*******************************************************************/

Shop::Shop() {

	location = 3;

	
}

/******************************************************************* 
*                      Shop::Print
* This function prints the Shop map
*******************************************************************/
void Shop::print() {

	//display the user their location
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"You stroll into a shop... There is not much to buy here, but maybe you will find something useful..." << endl << "You can barely make out the items due to mole vision. Press 'e' to buy something." << endl <<
	"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl << endl;

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
					cout << "$";
			}

		}
		cout << endl;
	}
	cout << endl << endl;
	
}

/******************************************************************* 
*                      Shop::setBottom
* This function sets the bottom pointer to Space
*******************************************************************/
void Shop::setBottom(Space* Bot) {

	bottom = Bot;
	
}

/******************************************************************* 
*                      Shop::getBottom
* This function sets the bottom pointer to Space
*******************************************************************/
Space* Shop::getBottom() {

	return bottom;
	
}
/******************************************************************* 
*                      Shop::setTop
* This function sets the top pointer to Space
*******************************************************************/
void Shop::setTop(Space* Top) {

	top = Top;
	
}

/******************************************************************* 
*                      Shop::getTop
* This function sets the top pointer to Space
*******************************************************************/
Space* Shop::getTop() {

	return top;
	
}
/******************************************************************* 
*                      Shop::setRight
* This function sets the right pointer to Space
*******************************************************************/
void Shop::setRight(Space* Right) {

	right = Right;
	
}

/******************************************************************* 
*                      Shop::getRight
* This function sets the right pointer to Space
*******************************************************************/
Space* Shop::getRight() {

	return right;
	
}
/******************************************************************* 
*                      Shop::setLeft
* This function sets the left pointer to Space
*******************************************************************/
void Shop::setLeft(Space* Left) {

	left = Left;
	
}

/******************************************************************* 
*                      Shop::getLeft
* This function sets the left pointer to Space
*******************************************************************/
Space* Shop::getLeft() {

	return left;
	
}
/******************************************************************* 
*                      Shop::getLocation
* This function returns an integer that specifies its location
*******************************************************************/
int Shop::getLocation() {

	return location;

}
/***************************************************** 
*                      Destructor
* This is the destructor for the Shop
*******************************************************************/
	Shop::~Shop() {

	}