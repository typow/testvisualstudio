#include "stdafx.h"
#include <iostream>


double getFirstDouble() 
{

	double num = -1;
	std::cout << "Enter a double value: ";
	std::cin >> num;
	return num;

}

double getSecondDouble()
{

	double num = -1;
	std::cout << "Enter second double value: ";
	std::cin >> num;
	return num;

}

char getOp() 
{

	char op = ' ';
	std::cout << "Enter one of the following: +, -, *, or /: ";
	std::cin >> op;
	return op;
}

double calc(double first, double second, char op)
{

	double result = 0.0;
	if (op == '+') 
	{
		result = first + second;
	} 
	else if (op == '-')
	{
		result = first - second;
	}
	else if (op == '*')
	{
		result = first * second;
	}
	else if (op == '/')
	{
		result = first / second;
	}

	return result;
}