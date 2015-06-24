#include "stdafx.h"
#include <iostream>
//#include "addTwoNumbers.h"



int readNumber()
{

	std::cout << "Enter a number to add: " << std::endl;
	int num = -1;
	std::cin >> num;
	return num;

}

void writeAnswer(int ans)
{

	std::cout << ans << std::endl;

}

/*
*
*Adds two numbers from user input
*
*/
void addTwoNumbers() 
{

	int num1 = -1;
	int num2 = -1;
	int ans = -1;

	num1 = readNumber();
	num2 = readNumber();

	ans = num1 + num2;
	writeAnswer(ans);
}
