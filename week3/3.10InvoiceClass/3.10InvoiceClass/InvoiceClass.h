#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Invoice {
public:
	//constructor initializes date mamber name with parameter invoiceName
	Invoice(std::string invoiceName, double Price, double tax, double itemDiscount)
		: name{ invoiceName } {//member initializer

		if (Price > 0) { //This will make sure price is valid
			price = Price;
		}

	}

	void item(int itemAmount) {//get itemamount from user quantity
		if (itemAmount > 0) {
			cout << itemAmount;
			price = price * itemAmount;
		}
		else if (itemAmount < 0) { // confused here about setting two if statements with an outpur
			cout << "Start Over";
		}
	}
	void Value(int itemValue) { // gets the price from the user
		if (itemValue > 0) { // condition to initialize if value greater than 0
			cout << itemValue;
			price = price + itemValue;
		}
		else if (itemValue < 0) {
			cout << "not a accepted value";
		}
	}
	void description(std::string itemDescr) {

		cout << itemDescr;

	}

	void number(std::string partNumber) {
		cout << partNumber;
	}


	//member function that sets the invoice name in the object
	void setinvoiceName(std::string invoiceName) {
		name = invoiceName; // this will store the invoice name
	}
	//member function that retrieves from invoice object with get function
	std::string getinvoiceName() const {
		return name; //this will return name value from callers
	}


	void setdiscount(double itemDiscount) {
		cout << itemDiscount;
	}
	double getdiscount() {
		return itemDiscount;
	}
	void setTax(double tax) {
		itemTax = price * tax;
	}
	double getTax() const {
		return itemTax;
	}
	double setPrice(double price) {
		price = price * itemTax * itemDiscount;
	}




private:
	std::string name; //data member to hold description
	double price{ 0 }; // data member with default value
	int quantity{ 0 };
	double itemTax{ .20 };
	double itemDiscount{ 0 };
	std::string partNumber { 0 };
	
	//data member for quantity
};//ends it

