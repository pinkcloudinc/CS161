// 2.18Integer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	cout << " Enter a four digit integer: " << flush;
		int a{ 0 };
		cin >> a;
		int num1{ 0 };
		num1 = a / 1000;
		int num2{ 0 };
		num2 = a / 100 % 10;
		int num3{ 0 };
		num3 = a / 10 % 10;
		int num4{ 0 };
		num4 = a  % 10;

		cout << num4 << "  " << num3 << "  " << num2 << "  " << num1 << endl;
	


		system("pause");
    return 0;
}

