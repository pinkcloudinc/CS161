#pragma once
#include <string>
#include <iostream>
using namespace std;

class Invoice {
public:
	Invoice(std::string NameOfPart, int partvalue) 
		: partName{ NameOfPart } {

			if (partvalue > 0) {
				value = partvalue;
			}
			
			 
		}
		void price(int partPrice) {
			if (partPrice > 0) {
				value = value + partPrice;
			}
		}
		void Quantity(int partQuantity) {
			if (partQuantity > 0) {
				value = partQuantity * value;
			}
		}


		void Number(std::string partNumber) {
			cout << "Part Number: " << partNumber << "\n";
		}
		void Descrip(std::string partDescrip) {
			cout << "Part Description:  " << partDescrip << "\n";
			
		}
		
		void sale(double saleDiscount) {
			if (saleDiscount > 0) {
				value = value - (value * (saleDiscount / 100);
			}
		}
		
		
		
		int getValue() {

			return value;
		}
		void setPartName(std::string NameOfPart) {
			partName = NameOfPart;
		}
		std::string getPartName() const {
			return partName;
		}
		void displayInvoice() {
		
			
			
		}
		void withTax() {
			cout << price * quantity * .20;
		}



private:
	std::string partName{0};
	int value{ 0 };
	};

