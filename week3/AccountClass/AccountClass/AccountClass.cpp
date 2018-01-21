// AccountClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Account.h"
using namespace std;


int main()
{
	//create two Account objects
	Account account1{ "Jane Green", 75 };
	Account account2{ "John blue", -7 };
	Account account3{ "Chippy", 1000 };

	displayAccount(account1);


	cout << "\n\nEnter deposit amount for account1: "; //prompt dont need int Deposit amount again
	int depositAmount;
	cin >> depositAmount; //obtain input
	cout << "adding" << depositAmount << "too account1 balance" << endl;
	account1.deposit(depositAmount); // add to account 1's balance



	//withdrawing
	int withdrawlAmount;
	cout << "\nEnter a withdrawl amount for account1: ";
	cin >> withdrawlAmount;
	if (withdrawlAmount > depositAmount) {
		cout << "Not enough funds" << endl;
	}
	else {
		cout << "withdrawing " << withdrawlAmount << "from account 1";
		account1.withdrawl(withdrawlAmount); // add to account 1's balance

	}

//disply balances


	cout << "\n\nAccount1 name is: " << account1.getName();
	cout << "\nbalance is $" << account1.getBalance();
	cout << "\nAccount2 name is: " << account2.getName();
	cout << "\nbalance is $" << account2.getBalance();
	cout << "\nAccount3 name is:" << account3.getName();
	cout << "\nbalance is $" << account3.getBalance();



 	cout << "\n\nEnter deposit amount for account2: "; //prompt
	//dont need twice
	cin >> depositAmount; //obtain input
	cout << "adding" << depositAmount << "too account2 balance";
	account2.deposit(depositAmount); // add to account 1's balance


	cout << "\nEnter a withdrawl amount for account2: ";
	cin >> withdrawlAmount;
	if (withdrawlAmount > depositAmount) {
		cout << "Not enough funds" << endl;
	}
	else {
		cout << "withdrawing " << withdrawlAmount << "from account 2";
		account2.withdrawl(withdrawlAmount); // add to account 1's balance
	}


									 //disply balances
	cout << "\n\nAccount1 name is: " << account1.getName();
	cout << "balance is $" << account1.getBalance();
	cout << "\nAccount2 name is: " << account2.getName();
	cout << "balance is $" << account2.getBalance();
	cout << "\nAccount3 name is:" << account3.getName();
	cout << "balance is $" << account3.getBalance();

	cout << "\n\nEnter deposit amount for account: "; //prompt
	cin >> depositAmount; //obtain input
	cout << "adding" << depositAmount << "too account3 balance";
	account3.deposit(depositAmount); // add to account 1's balance


	cout << "\nEnter a withdrawl amount for account3: ";
	cin >> withdrawlAmount;
	if (withdrawlAmount > depositAmount) {
		cout << "Not enough funds" << endl;
	}
	else {
		cout << "withdrawing " << withdrawlAmount << "from account 3";
		account3.withdrawl(withdrawlAmount); // add to account 1's balance
	}

									 //disply balances
	cout << "\n\nAccount1 name is: " << account1.getName();
	cout << "balance is $" << account1.getBalance();
	cout << "\nAccount2 name is: " << account2.getName();
	cout << "balance is $" << account2.getBalance();
	cout << "\nAccount3 name is:" << account3.getName();
	cout << "balance is $" << account3.getBalance() << endl;

	system("pause");
	return 0;
}



