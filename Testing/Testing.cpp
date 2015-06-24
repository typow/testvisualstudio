// Testing.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include "addTwoNumbers.h"
#include "doubleMath.h"
#include "FallingObject.h"


void dataTypeSize() {
	using namespace std;
	cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
	cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
	cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
	cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl; // C++11, may not be supported by your compiler
	cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl; // C++11, may not be supported by your compiler
	cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
	cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
	cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
	cout << "long long:\t" << sizeof(long long) << " bytes" << endl; // C++11, may not be supported by your compiler
	cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
	cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
	cout << "long double:\t" << sizeof(long double) << " bytes" << endl;
}



int main()
{
	//addTwoNumbers();
	//dataTypeSize();


	/*//doubleMath
	double first = getFirstDouble();
	double second = getSecondDouble();
	char op = getOp();
	double result = calc(first, second, op);
	if (result != 0.0) {
		std::cout << result << std::endl;
	}
	*/

	//FallingObject
	double height = getHeight();
	for (int i = 0; i < 6; i++)
	{ 
		double h = height - calculateHeight(i);
		if (h < 0.0)
		{
			h = 0.0;
		}
		std::cout << "At " << i << " seconds, the ball is at height: " << 
			h << " meters" << std::endl;
		

	}

}

