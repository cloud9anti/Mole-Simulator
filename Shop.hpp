/*********************************************************************
** Program name:  Final_Project - Shop.hpp
** Author:               Alexander McGrath
** Date:                  06/06/2019
** Description:   Shop.hpp is the Shop class specification file.
**                            
*********************************************************************/
#ifndef SHOP_H
#define SHOP_H


#include "Space.hpp"


#include <string>

using std::string;


//Shop class declaration
class Shop : public Space
{
  private:
	int location;


  public:

    Shop();
    ~Shop();
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
