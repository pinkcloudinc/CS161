﻿// 3.10InvoiceClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "InvoiceClass.h"



int main()
{
	Invoice invoice1{ "Powerdrill", {0}, (.2), {0} };
	double tax;
	
	cout << "Invoice for: " << invoice1.getinvoiceName() << endl;
	int itemAmount;
	cout << "How Many: ";
	cin >> itemAmount; 
	
	

	int itemValue;
	cout << "How much: ";
	cin >> itemValue;

	std::string itemDescr;
	cout << "Item Description: ";
	cin >> itemDescr;

	std::string partNumber;
	cout << "Enter 8 digit part Number: ";
	cin >> partNumber;
	
	double itemDiscount;
	cout << "Discount applied: ";
	cin >> itemDiscount;
	
	
	
	cout << "Invioce For: " << invoice1.getinvoiceName() <<  endl;
	cout << "\nQuantity: "; invoice1.Value(itemAmount); 
	cout << "\nPrice: "; invoice1.item(itemValue); 
	cout << "\nDescription: "; invoice1.description(itemDescr);
	cout << "\nPart Number: "; invoice1.number(partNumber);
	cout << "\nDiscount: "; invoice1.setdiscount(itemDiscount);
	cout << "\nTax = " << invoice1.getTax();
	cout << "\n==========================" << endl;

	cout << "Total is:" << itemValue * itemAmount * itemDiscount * invoice1.getTax() << endl;
	
			
	
	system("pause");
    return 0;
}

