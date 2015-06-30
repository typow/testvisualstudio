#ifndef MONSTER_H
#define MONSTER_H

#include <string>

/*
*
*used for the type of monster.
*
*/
enum class Race 
{

	ORGE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME

};


/*
*
*Monster struct that has a member for its type its name and its health level.
*
*/
struct Monster 
{

	Race type;
	std::string name;
	int health;

};

//returns the Race of the Monster monst as a std::string
std::string getType(Monster monst);

//prints the stats of the Monster monst
void PrintMonster(Monster monst);

#endif