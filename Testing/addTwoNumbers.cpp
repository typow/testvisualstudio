#include "stdafx.h"
#include <iostream>
#include "addTwoNumbers.h"

/*
 *
 *Adds two numbers from user input
 *
 */
void addTwoNumbers() {

	int num1 = -1;
	int num2 = -1;
	int ans = -1;
	
	num1 = ReadNumber();
	num2 = ReadNumber();

	ans = num1 + num2;

	WriteAnswer(ans);
}

int ReadNumber() {

	std::cout << "Enter a number to add";
	int num = -1;
	std::cin >> num;
	return num;

}

void WriteAnswer(int ans) {

	std::cout << ans;

}