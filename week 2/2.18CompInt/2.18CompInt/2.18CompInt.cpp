// 2.18CompInt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Please Enter two Integers: " << endl; 
		int num1{0};
		int num2{0};
		cin >> num1 >> num2;

		if (num1 == num2) {
			cout << "Numbers are equal" << endl;
		}
			if(num1 != num2) {
				cout << "These numbers are not equal" << endl;
						}
			if(num1 > num2) {
				cout << num2 << " is smaller" << endl;
			}
			if(num1 < num2) {
				cout << num1 << " is smaller" << endl;
			}
			system("pause");
    return 0;
}

