/*********************************************************************
** Program name:  Final_Project - Island.hpp
** Author:               Alexander McGrath
** Date:                  06/06/2019
** Description:   Island.hpp is the Island class specification file.
**                            
*********************************************************************/
#ifndef ISLAND_H
#define ISLAND_H


#include "Space.hpp"


#include <string>

using std::string;


//Island class declaration
class Island : public Space
{
  private:
	int location;

  public:

    Island();
    ~Island();
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
