#include <string>
class BankAccount
{
	std::string name;
	std::string acctnum;
	double balance;

public:
	BankAccount(std::string client, std::string num, double bal = 0.0);
	BankAccount();
	void show(void) const;
	void deposit(double cash);
	void withdraw(double cash);
};

