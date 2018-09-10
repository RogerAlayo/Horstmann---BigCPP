#include <iostream>
#include <string>

using namespace std;

class Address
{
public:
	Address();
	Address(int apartnum);
	void comes_before(Address obj1, Address obj2) const;
	void print() const;

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

	string answer;

	string remainder;

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

	apartnumber = 0;
}

Address::Address(int apartnum)
{
	apartnumber = apartnum;

	string answer;
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

void Address::print() const
{
	cout << '\n' << housenum << " " << street << endl;
	cout << city << ", " << state << ",  " << postal;

	if (apartnumber != 0)
		cout << "\nApartment number: " << apartnumber << endl << endl;
}

void Address::comes_before(Address obj1, Address obj2) const
{
	if (obj1.postal < obj2.postal)
	{
		cout << "\nAddress " << obj1.postal << "comes before " << "Address "
			<< obj2.postal << endl;
	}
	else 
		cout << "\nAddress " << obj2.postal << " comes before " << "Address "
		<< obj1.postal << endl;
}

int main()
{
	int a, b;
	string answer;

	cout << "Do you want to enter an apartment number (y/n): " << endl;
	cin >> answer;

	if (answer == "y" || answer == "Y")
	{
		cout << "\nEnter apartment number: " << endl;
		cin >> a;

		cout << "\nEnter address of first house: "<<endl;
		Address obj1(a);
		obj1.print();

		cout << "\nEnter address of second house: " << endl;
		cout << "\nEnter apartment number: " << endl;
		cin >> b;
		Address obj2(b);
		obj2.print();

		obj1.comes_before(obj1, obj2);
	}
	else
	{
		cout << "Wrong choice, Try again\n" << endl;
		main();
	}

	system("pause");
	return 0;
}