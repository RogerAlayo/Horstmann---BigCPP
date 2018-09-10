#include <iostream>
#include <string>

using namespace std;

class Address
{
public:
	Address();
	Address(int apartnum);
	void read();

	int get_postal() const;
	void comes_before(Address obj1, Address obj2) const;
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

Address::Address(int apartnum)
{
	apartnumber = apartnum;
}

void Address::read()
{
	string remainder;

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

void Address::comes_before(Address obj1, Address obj2) const
{
	if (obj1.postal < obj2.postal)
	{
		cout << '\n' << '\n' << obj1.postal << " comes before " << obj2.postal << endl;
	}

	else if (obj2.postal < obj1.postal)
	{
		cout << '\n' << '\n' << obj2.postal << " comes before " << obj1.postal << endl;
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
	int a = 0;
	string answer1;
	string answer2;

	cout << "Do you live in an apartment: (y/n):" << endl;
	cin >> answer1;

	if (answer1 == "y" || answer1 == "Y" || answer1 == "yes" || answer1 == "Yes")
	{
		cout << "Enter your apartment number: " << endl;
		cin >> a;
		Address obj1(a);
		obj1.read();
		obj1.print_address();

		cout << "\nDo you live in an apartment: (y/n):" << endl;
		cin >> answer2;

		cout << "Enter your apartment number: " << endl;
		cin >> a;
		Address obj2(a);
		obj2.read();
		obj2.print_address();

		obj1.comes_before(obj1, obj2);
	}

	if (answer1 == "n" || answer1 == "N")
	{
		a = 0;
		Address obj1(a);	//wrong
	}

	system("pause");
	return 0;
}