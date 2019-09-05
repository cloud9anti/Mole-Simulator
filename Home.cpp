/*********************************************************************
** Program name:  Final_Project - Home.cpp
** Author:               Alexander McGrath
** Date:                  06/06/2019
** Description:   Home.cpp is the Home class implementation file.
**                            
*********************************************************************/

#include "Dungeon.hpp"
#include "Home.hpp"
#include "Shop.hpp"
#include "Island.hpp"
#include "Mine.hpp"
#include <string>
#include <iostream>


using std::string;
using std::cin;
using std::cout;
using std::endl;

/******************************************************************* 
*                      Home::Home
* This function creates the Home object
*******************************************************************/

Home::Home() {

	location = 4;

	
}

/******************************************************************* 
*                      Home::Print
* This function prints the Home map
*******************************************************************/
void Home::print() {

	//display the user their location
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"You finally notice the scent of your village. " << endl << "You will need some claw oil to dig your way home!" << endl <<
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
					cout << "#";
			}

		}
		cout << endl;
	}
	cout << endl << endl;
	
}

/******************************************************************* 
*                      Home::setBottom
* This function sets the bottom pointer to Space
*******************************************************************/
void Home::setBottom(Space* Bot) {

	bottom = Bot;
	
}

/******************************************************************* 
*                      Home::getBottom
* This function sets the bottom pointer to Space
*******************************************************************/
Space* Home::getBottom() {

	return bottom;
	
}
/******************************************************************* 
*                      Home::setTop
* This function sets the top pointer to Space
*******************************************************************/
void Home::setTop(Space* Top) {

	top = Top;
	
}

/******************************************************************* 
*                      Home::getTop
* This function sets the top pointer to Space
*******************************************************************/
Space* Home::getTop() {

	return top;
	
}
/******************************************************************* 
*                      Home::setRight
* This function sets the right pointer to Space
*******************************************************************/
void Home::setRight(Space* Right) {

	right = Right;
	
}

/******************************************************************* 
*                      Home::getRight
* This function sets the right pointer to Space
*******************************************************************/
Space* Home::getRight() {

	return right;
	
}
/******************************************************************* 
*                      Home::setLeft
* This function sets the left pointer to Space
*******************************************************************/
void Home::setLeft(Space* Left) {

	left = Left;
	
}

/******************************************************************* 
*                      Home::getLeft
* This function sets the left pointer to Space
*******************************************************************/
Space* Home::getLeft() {

	return left;
	
}
/******************************************************************* 
*                      Home::getLocation
* This function returns an integer that specifies its location
*******************************************************************/
int Home::getLocation() {

	return location;

}
/***************************************************** 
*                      Destructor
* This is the destructor for the Home
*******************************************************************/
	Home::~Home() {

	}