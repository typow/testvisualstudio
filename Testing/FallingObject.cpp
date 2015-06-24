#include "stdafx.h"
#include <iostream>
#include "FallingObject.h"

double getHeight() 
{
	double height = 0.0;
	std::cout << "Enter initial height in meters: ";
	std::cin >> height;
	return height;

}

double calculateHeight(int seconds)
{

	return myConstants::gravity * seconds * seconds / 2;

}