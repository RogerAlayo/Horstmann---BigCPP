#include <iostream>
#include <string>

using namespace std;

class Address
{
public:
	Address();
	void read();
	
	int get_postal() const;
	bool comes_before(Address n) const;
	void print_address() const;

private:
	int housenum;
	int apartnumber;	
	string street;
	string city;
	string state;
	int postal;
};

Address::Address()
{
	housenum = 0;
	apartnumber = 0;
	postal = 0;
}

void Address::read()
{
	string remainder;
	string answer;

	cout << "Do you live in an apartment no: (y/n):" << endl;
	cin >> answer;

	if (answer == "y" || answer == "Y" || answer == "yes" || answer == "Yes")
	{
		cout << "Enter your apartment number: " << endl;
		cin >> apartnumber;
	}
	else
	{
		apartnumber = 0;
	}
	
	cout << "Enter Address: " << endl;
	cout << "Enter housenum:" << endl;
	cin >> housenum;
	getline(cin, remainder);
	cout << "Enter street:" << endl;
	getline(cin, street);
	cout << "Enter city:" << endl;
	getline(cin, city);
	cout << "Enter state:" << endl;
	getline(cin, state);
	cout << "Enter postal code:" << endl;
	cin >> postal;
	getline(cin, remainder);
}

int Address::get_postal() const
{
	return postal;
}

bool Address::comes_before(Address n) const
{
	if (n.get_postal() < postal)
	{
		return false;
	}

	else if (postal < n.get_postal())
	{
		return true;
	}

}

void Address::print_address() const
{
	if (apartnumber != 0)
	{
		cout << '\n' << housenum << " " << street << ", # " << apartnumber << endl;
		cout << city << ", " << state << ",  " << postal;
	}
	else
	{
		cout << '\n' << housenum << " " << street << endl;
		cout << city << ", " << state << ",  " << postal;
	}
}

int main()
{
	Address before;
	Address next;

	before.read();
	cout << endl;
	next.read();

	if (before.comes_before(next))
	{
		before.print_address();
		cout << endl;
		next.print_address();
	}
	else
	{
		next.print_address();
		cout << endl;
		before.print_address();
	}

	cout << "\nThe first comes before the second" << endl << endl;

	system("pause");
	return 0;
}