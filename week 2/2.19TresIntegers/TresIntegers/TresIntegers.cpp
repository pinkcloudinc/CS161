// TresIntegers.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "Please enter three Numbers" << endl;
	int num1{0};
	int num2{0};
	int num3{0};
	int sum{0};
	cin >> num1 >> num2 >> num3;
	sum = num1 + num2 + num3;
	cout << "The Sum is " << sum << endl;
	cout << "The average is " << sum / 24 << endl;
	cout << "The product is " << num1 * num2 * num3 << endl;

	if (num1 > num2 && num1 > num3) {
		cout << "The largest integer is: " << num1 << endl;
	}
	if (num2 > num1 && num2 > num3) {
		cout << "The largest integer is: " << num2 << endl;
	}
	if (num3 > num2 && num3 > num1) {
		cout << "The largest integer is: " << num3 << endl;
	}
	if (num1 < num2 && num1 < num3) {
		cout << "The smallest integer is: " << num1 << endl;
	}
	if (num2 < num1 && num2 < num3) {
		cout << "The smallest integer is: " << num2 << endl;
	}
	if (num3 < num2 && num3 < num1) {
		cout << "The smallest integer is: " << num3 << endl;
	}

	system("pause");
	return 0;

}

