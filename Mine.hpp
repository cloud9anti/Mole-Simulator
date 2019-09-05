/*********************************************************************
** Program name:  Final_Project - Mine.hpp
** Author:               Alexander McGrath
** Date:                  06/06/2019
** Description:   Mine.hpp is the Mine class specification file.
**                            
*********************************************************************/
#ifndef MINE_H
#define MINE_H


#include "Space.hpp"


#include <string>

using std::string;


//Mine class declaration
class Mine : public Space
{
  private:
	int location;


  public:

    Mine();
    ~Mine();
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
