/*********************************************************************
** Program name:  Final_Project - Mine.cpp
** Author:               Alexander McGrath
** Date:                  06/06/2019
** Description:   Mine.cpp is the Mine class implementation file.
**                            
*********************************************************************/

#include "Dungeon.hpp"
#include "Shop.hpp"
#include "Island.hpp"
#include "Home.hpp"
#include "Mine.hpp"
#include <string>
#include <iostream>


using std::string;
using std::cin;
using std::cout;
using std::endl;

/******************************************************************* 
*                      Mine::Mine
* This function creates the Mine object
*******************************************************************/

Mine::Mine() {

	location = 2;



	
}

/******************************************************************* 
*                      Mine::Print
* This function prints the Mine map
*******************************************************************/
void Mine::print() {

	//display the user their location
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"You stumble into a mine... You can smell some treasure." << endl <<  "This could be your chance to become a moleionaire!!" << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl << endl;

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
					cout << "+";
			}

		}
		cout << endl;
	}
	cout << endl << endl;
	
}

/******************************************************************* 
*                      Mine::setBottom
* This function sets the bottom pointer to Space
*******************************************************************/
void Mine::setBottom(Space* Bot) {

	bottom = Bot;
	
}

/******************************************************************* 
*                      Mine::getBottom
* This function sets the bottom pointer to Space
*******************************************************************/
Space* Mine::getBottom() {

	return bottom;
	
}
/******************************************************************* 
*                      Mine::setTop
* This function sets the top pointer to Space
*******************************************************************/
void Mine::setTop(Space* Top) {

	top = Top;
	
}

/******************************************************************* 
*                      Mine::getTop
* This function sets the top pointer to Space
*******************************************************************/
Space* Mine::getTop() {

	return top;
	
}
/******************************************************************* 
*                      Mine::setRight
* This function sets the right pointer to Space
*******************************************************************/
void Mine::setRight(Space* Right) {

	right = Right;
	
}

/******************************************************************* 
*                      Mine::getRight
* This function sets the right pointer to Space
*******************************************************************/
Space* Mine::getRight() {

	return right;
	
}
/******************************************************************* 
*                      Mine::setLeft
* This function sets the left pointer to Space
*******************************************************************/
void Mine::setLeft(Space* Left) {

	left = Left;
	
}

/******************************************************************* 
*                      Mine::getLeft
* This function sets the left pointer to Space
*******************************************************************/
Space* Mine::getLeft() {

	return left;
	
}
/******************************************************************* 
*                      Mine::getLocation
* This function returns an integer that specifies its location
*******************************************************************/
int Mine::getLocation() {

	return location;

}
/***************************************************** 
*                      Destructor
* This is the destructor for the Mine
*******************************************************************/
	Mine::~Mine() {

	}