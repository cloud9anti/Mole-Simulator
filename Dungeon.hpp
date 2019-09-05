/*********************************************************************
** Program name:  Final_Project - Dungeon.hpp
** Author:               Alexander McGrath
** Date:                  06/06/2019
** Description:   Dungeon.hpp is the Dungeon class specification file.
**                            
*********************************************************************/
#ifndef DUNGEON_H
#define DUNGEON_H


#include "Space.hpp"


#include <string>

using std::string;


//Dungeon class declaration
class Dungeon : public Space
{
  private:
	int location;


  public:

    Dungeon();
    ~Dungeon();
		void print();
		void setBottom(Space*);
		Space* getBottom();
		void setTop(Space*);
		Space* getTop();
		void setLeft(Space*);
		Space* getLeft();
		void setRight(Space*);
		Space* getRight();
		int getLocation();

};

#endif
