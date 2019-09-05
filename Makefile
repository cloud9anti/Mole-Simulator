output: main.o Island.o Menu.o Space.o Dungeon.o Mine.o Shop.o Home.o
	g++ -std=c++11 main.o Island.o Menu.o Space.o Dungeon.o Mine.o Shop.o Home.o -o output

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Menu.o: Menu.cpp Menu.hpp
	g++ -std=c++11 -c Menu.cpp

Island.o: Island.cpp Island.hpp
	g++ -std=c++11 -c Island.cpp

Space.o: Space.cpp Space.hpp
	g++ -std=c++11 -c Space.cpp

Dungeon.o: Dungeon.cpp Dungeon.hpp
	g++ -std=c++11 -c Dungeon.cpp

Mine.o: Mine.cpp Mine.hpp
	g++ -std=c++11 -c Mine.cpp

Shop.o: Shop.cpp Shop.hpp
	g++ -std=c++11 -c Shop.cpp

Home.o: Home.cpp Home.hpp
	g++ -std=c++11 -c Home.cpp



zip:
	zip FinalProject_McGrath_Alexander.zip *.cpp *.hpp *.pdf *.txt Makefile 

clean:
	rm *.o output

#target: dependencies
#   action
