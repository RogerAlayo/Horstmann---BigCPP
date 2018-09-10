#include <iostream>
#include <string>

using namespace std;

#include <iostream>
#include <string>

using namespace std;

class Account
{
public:
	Account();
	Account(double new_balance);
	double deposit(double add);
	double withdraw(double get);
	void transfer(double m, Account &acc);
	double interest();
	void query() const;

private:
	double balance;
};

Account::Account()
{
	balance = 0;
}

Account::Account(double new_balance)
{
	balance = new_balance;
}

double Account::deposit(double add)
{
	balance = balance + add;
	return balance;
}

double Account::interest()
{
	double doubled = balance * 2;
	int month = 0;
	while (balance < doubled)
	{
		balance = balance + (balance * .06);
		cout << balance << endl;
		month++;
	}
	cout << "Balance with compound interest is: " << balance << endl;
	cout << "Months: " << month << endl;
	return balance;
}

double Account::withdraw(double m)
{
	double penalty = 0;
	
	balance = balance - m;

	if (balance < 0)
	{
		cout << "Overdraft: " << balance << endl;
		balance = balance - penalty;
		cout << "Penalty: " << balance << endl;
		return balance;
	}
	
}

void Account::transfer(double m, Account &acc)	//Q: can u show how acc value would be put in memory and not update object thru a pic? 
{	
	withdraw(m);
	acc.deposit(m);
}

void Account::query() const
{
	cout << "Balance is: " << balance << endl;
}

class Bank		//Q: HOW IS THIS LEGAL? NO PUBLIC OR PRIVATE???
{	
	Account checking, savings;
};

int main()
{
	Account savings(20000);
	Account checking(10000);

	bool more = true;
	string answer;
	string a;

	while (more)
	{
		cout << "Select an account: (s/c)" << endl;
		cin >> a;

		if (a == "s" || a == "S" || a == "Savings" || a == "savings")
		{
			string d;

			cout << "What would you like to do? (withdraw, deposit, query, transfer or interest)" << endl;
			cin >> d;

			if (d == "withdraw")
			{
				double get = 0;

				cout << "How much would you like to withdraw?" << endl;
				cin >> get;

				savings.withdraw(get);
				savings.query();
			}
			else if (d == "deposit")
			{
				double put = 0;

				cout << "How much would you like to deposit?" << endl;
				cin >> put;

				savings.deposit(put);
				savings.query();
				
			}
			else if (d == "query")
			{
				savings.query();
			}
			else if (d == "interest")
			{
				savings.interest();
			}
			else if (d == "transfer")
			{ 
				double t = 0; 

				cout << "How much do you want to transfer: " << endl;
				cin >> t;

				savings.transfer(t, checking);

				savings.query();
				checking.query();

			}
			else
			{
				cout << "\nPlease enter only the following: withraw, deposit, or query" << endl;
				main();
			}

			cout << "Would you like to continue: (y/n)" << endl;
			cin >> answer;

			if (answer == "y" || answer == "Y" || answer == "yes" || answer == "Yes")
			{
				more = true;
			}
			else
				more = false;
		}
		else if (a == "c" || a == "C" || a == "Checking" || a == "checking")
		{
			string d;

			cout << "What would you like to do? (withdraw, deposit, query, transfer, or interest)" << endl;
			cin >> d;

			if (d == "withdraw")
			{
				double get = 0;

				cout << "How much would you like to withdraw?" << endl;
				cin >> get;

				checking.withdraw(get);
				savings.query();
			}
			else if (d == "deposit")
			{
				double put = 0;
		
				cout << "How much would you like to deposit?" << endl;
				cin >> put;

				checking.deposit(put);
				checking.query();
			}
			else if (d == "query")
			{
				checking.query();
			}
			else if (d == "interest")
			{
				checking.interest();
			}
			else if (d == "transfer")
			{
				double t = 0;

				cout << "How much do you want to transfer: " << endl;
				cin >> t;

				checking.transfer(t, savings);

				savings.query();
				checking.query();
			}
			else
			{
				cout << "\nPlease enter only the following: withraw, deposit, or query" << endl;
				main();
			}

			cout << "Would you like to continue: (y/n)" << endl;
			cin >> answer;

			if (answer == "y" || answer == "Y" || answer == "yes" || answer == "Yes")
			{
				more = true;
			}
			else
				more = false;
		}

	}
	

	system("pause");
	return 0;
}