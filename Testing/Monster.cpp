#include "stdafx.h"
#include <iostream>
#include "Monster.h"

/*
*
*Returns the type of the monster as a string
*
*/
std::string getType(Monster monst) 
{
	std::string type = " ";

	switch (monst.type)
	{

	case Race::ORGE:
		type = "Orge";
		break;

	case Race::DRAGON:
		type = "Dragon";
		break;

	case Race::ORC:
		type = "Orc";
		break;

	case Race::GIANT_SPIDER:
		type = "Giant Spider";
		break;

	case Race::SLIME:
		type = "Slime";
		break;

	}

	return type;

}


/*
*
*Print out all the members of a Monster struct
*
*/
void PrintMonster(Monster monst) 
{

	std::cout << "This " << getType(monst) << " is named " << monst.name <<
		" and has " << monst.health << " health." << std::endl;

}