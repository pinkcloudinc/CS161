// DietelFuelUsage.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int kilosUsed{ 0 };
	int litersUsed{ 0 };
	
	cout << "Enter Kilometers driven or -1 to quit:  ";
	int kilos;
	cin >> kilos;
	
	//cout << "Average KM/Liters used for this is:  " << kilos / liters << "\n";
	
	while (kilos != -1) {
		
		cout << "Enter number of liters of petrol used: ";
		int liters;
		cin >> liters;

		kilosUsed += kilos;

		litersUsed += liters;

		double thisTripKml{ static_cast<double> (kilos) / liters };
		double totalTripKml{ static_cast<double> (kilosUsed) / litersUsed };
				

	 //then I need to take the average of both totals
		cout << setprecision(6) << fixed << endl;
		cout << "Total KM/L per liter this trip:  " << setprecision( 6 ) << fixed << thisTripKml << "\n";
				
		cout << "Total Kms per liter:  "  << totalTripKml << endl;

		cout << "Enter Kilometers driven or -1 to quit:  ";
		
		cin >> kilos;
		
		
	}
		

	
	
	

	system("pause");
    return 0;
}

