#include <iostream>
#include <string>

using namespace std;

class Account
{
public:
	Account();
	Account(double new_balance);
	double deposit();
	double withdraw();
	void query() const;

private:
	double balance;
	double get;
	double add;
};

Account::Account()
{
	balance = 0;
	get = 0;
	add = 0;
}

Account::Account(double new_balance)
{
	balance = new_balance;
}

double Account::deposit()
{
	cout << "How much would you like to deposit?" << endl;
	cin >> add;

	balance = balance + add;

	cout << "Your new balance is: " << balance << endl;
	return balance;
}

double Account::withdraw()
{
	double get;
	double penalty = 5;

	cout << "How much would you like to withdraw?" << endl;
	cin >> get;

	balance = balance - get;

	if (balance < 0)
	{
		cout << "Overdraft: " << balance << endl;
		balance = balance - penalty;
		cout << "Penalty: " << balance << endl;
		return balance;
	}
	else
		cout << "Balance: " << balance << endl;
}

void Account::query() const
{
	cout << "Balance is: " << balance << endl;
}

int main()
{
	Account money(100);	//since now global variale the balance changes but when put in locally right above d declaration
						//the 100 balance doesn't change
	bool more = true;
	string answer;

	while (more)
	{
		//
		string d;
		double a = 0;

		cout << "What would you like to do? (withdraw, deposit, or query)" << endl;
		cin >> d;

		if (d == "withdraw")
		{
			a = money.withdraw();	//Don't do return money.withdraw(); or the program will close
			Account money(a);
		}
		else if (d == "deposit")
		{
			a = money.deposit();
			Account money(a);
		}
		else if (d == "query")
		{
			money.query();
		}
		else
		{
			cout << "\nPlease enter only the following: withraw, deposit, or query" << endl;
			main();
		}

		cout << "Would you like to continue: (y/n)" << endl;
		cin >> answer;
		
		if (answer == "y" || answer == "Y")
		{
			more = true;
		}
		else
			more = false;
	}

	system("pause");
	return 0;
}
