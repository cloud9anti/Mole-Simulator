/*********************************************************************
** Program name:  Final_Project - Home.hpp
** Author:               Alexander McGrath
** Date:                  06/06/2019
** Description:   Home.hpp is the Home class specification file.
**                            
*********************************************************************/
#ifndef HOME_H
#define HOME_H


#include "Space.hpp"


#include <string>

using std::string;


//Home class declaration
class Home : public Space
{
  private:
	int location;


  public:

    Home();
    ~Home();
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
