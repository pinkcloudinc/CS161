// CircleCalculations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "Welcome to the world of circles" << endl;
	int pi = 3.14159;
	int radius = 0;
	cout << "Enter the radius of your circle:  " << endl;
	cin >> radius; 
	cout << "The Diameter of your circles is: " << radius * 2 << endl;
	cout << "The Area of your circle is: " << pi * radius * radius << endl;
	cout << "The circumference of your circle is: " << (pi * radius) * 2 << endl;


    return 0;
}

