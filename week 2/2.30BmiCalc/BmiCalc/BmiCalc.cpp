// BmiCalc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Welcome to the Wonderful world of BMI" << endl;
	int Pounds{ 0 };
	int height{ 0 };
	int bmi{ 0 };

	cout << "Enter your weight in pounds:\n " << endl;
	cin >> Pounds;
	cout << "Enter your height in inches:\n " << endl;
	cin >> height;

	bmi = Pounds * 703/(height * height); 

	cout << "Your BMI is: " << bmi << endl; 

	if (bmi > 30) {
		cout << "You Are Obese\n" << endl;
	}
	if (bmi <= 29.9 && bmi >= 25) {
		cout << "You are overweight\n" << endl; 
	}
	if (bmi <= 24.9 && bmi >= 18.5) {
		cout << "You are normal\n" << endl;
	}
	if (bmi < 18.5) {
		cout << "You are underweight\n" << endl;
	}
	cout << "BMI VALUES\n" << endl;
	cout << "Underweight: less than 18.5" << endl;
	cout << "Normal:      between 18.5 and 24.9" << endl;
	cout << "Overweight:  between 25 and 29.9" << endl;
	cout << "Obese:       30 or greater" << endl;

	system("pause");
    return 0;
}

