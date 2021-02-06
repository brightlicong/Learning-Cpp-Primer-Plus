#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount() {
	name = "undefined_name";
	acctnum = "00000000000000000000";
	balance = 0.0;
}

BankAccount::BankAccount(std::string client, std::string num, double bal) {
	name = client;
	acctnum = num;
	balance = bal;
}

void BankAccount::show() const {
	using std::cout;
	using std::endl;
	if (name == "undefined_name") {
		cout << "This account has not defined yet.\n";
	}

	cout << "NAME: " << name << endl;
	cout << "----- -----\n";
	cout << "ID: " << acctnum << endl;
	cout << "BALANCE: " << balance << endl;
	cout << endl;
} 

void BankAccount::deposit(double cash) {
	balance += cash;
	show();
}

void BankAccount::withdraw(double cash){
	using std::cout;
	if ((balance - cash) < 0) {
		cout << "Sorry, you don't have enough money.\n";
		cout << "THis action was refused.\n";
		cout << std::endl;
		return;
	}
	balance -= cash;
	show();
}
