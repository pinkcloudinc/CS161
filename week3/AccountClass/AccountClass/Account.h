#pragma once
#include <iostream>
#include <string>


class Account
{
public:
	//constructor initializes data member name with two parameter accountName and initial balance int for value
	Account(std::string accountName, int initialBalance)
		: name{ accountName } { // member initializer empty body

		//validate the initialBalance is greater than 0; if not;
		//date member balance keeps its default initial value of 0
		if (initialBalance > 0) {
			balance = initialBalance;
		}
	
	}
	//function that deposits (adds0 only a valide amount to the balance
	void deposit(int depositAmount) {
		if (depositAmount > 0) { // if the deposit amount is valid
			balance = balance + depositAmount;
		}
	}

	void withdrawl(int withdrawlAmount) {
		if (withdrawlAmount >= 0) { // if the deposit amount is valid
			balance = balance - withdrawlAmount;
		}
	}
	//function to return account balance
	int getBalance() const {
		return balance;
	} 
	//function to set account name
	void setName(std::string accountName) {
		name = accountName;
	}
	//function to retrieve accounts name
	
	std::string getName() const {
		return name;
	}
	void displayAccount(Account accountToDisplay) {

		cout << "\nbalance is $" << getBalance();
		cout << "\name is " << getName();


	}

private:
	std::string name; // account name data member
	int balance{ 0 };// date member with default initial value
	
	
	
}; // end class Account

