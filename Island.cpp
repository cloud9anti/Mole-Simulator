/*********************************************************************
** Program name:  Final_Project - Island.cpp
** Author:               Alexander McGrath
** Date:                  06/06/2019
** Description:   Island.cpp is the Island class implementation file.
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
*                      Island::Island
* This function creates the Island object
*******************************************************************/

Island::Island() {


location = 0;



	
}

/******************************************************************* 
*                      Island::Print
* This function prints the island map
*******************************************************************/
void Island::print() {

	//display the user their location
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl <<"Welcome to paradise! On this island, you will find infinite grains of sand. Moles cannot swim or climb palm trees and they see very poorly. Do as you like, you cannot leave here!" << endl <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl << endl;

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
				cout << " ";
			} else if ((i==5 || i==14) && ( j==28)) {
				cout << "/";
			} else if ((i==5 || i== 14) && (j==15)){
				cout << "\\";
			}
			else {
					cout << ".";
			}

		}
		cout << endl;
	}
	cout << endl << endl;
	
}

/******************************************************************* 
*                      Island::setBottom
* This function sets the bottom pointer to Space
*******************************************************************/
void Island::setBottom(Space* Bot) {

	bottom = Bot;

	
}
/******************************************************************* 
*                      Island::getBottom
* This function gets the bottom pointer
*******************************************************************/
Space* Island::getBottom() {

	return bottom;

	
}
/******************************************************************* 
*                      Island::getTop
* This function sets the top pointer to Space
*******************************************************************/
void Island::setTop(Space* Top) {

	top = Top;

	
}
/******************************************************************* 
*                      Island::getTop
* This function gets the top pointer
*******************************************************************/
Space* Island::getTop() {

	return top;

	
}
/******************************************************************* 
*                      Island::setRight
* This function sets the right pointer to Space
*******************************************************************/
void Island::setRight(Space* Right) {

	right = Right;
	
}

/******************************************************************* 
*                      Island::getRight
* This function sets the right pointer to Space
*******************************************************************/
Space* Island::getRight() {

	return right;
	
}
/******************************************************************* 
*                      Island::setLeft
* This function sets the left pointer to Space
*******************************************************************/
void Island::setLeft(Space* Left) {

	left = Left;
	
}

/******************************************************************* 
*                      Island::getLeft
* This function sets the left pointer to Space
*******************************************************************/
Space* Island::getLeft() {

	return left;
	
}
/******************************************************************* 
*                      Island::getLocation
* This function returns an integer that specifies its location
*******************************************************************/
int Island::getLocation() {

	return location;

}
/******************************************************************* 
*                      Destructor
* This is the destructor for the Island
*******************************************************************/
	Island::~Island() {

	}