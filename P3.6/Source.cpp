#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <math.h>	//for ceil()
#include <ctype.h>	//do u really need this for isalpha and islower, etc?

using namespace std;
int main()
{
	int num = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	cout << "Enter positive integer (less than 3999): " << endl;
	cin >> num;

	a = num % 10;
	b = num % 100 - a;
	c = num % 1000 - (a + b);
	d = num % 10000 - (a + b + c);

	if (d > 0)
	{
		int x;
		x = d / 1000;
		for (int i = 0; i < x; i++) // make sure u give i a type
		{
			cout << "M";
		}
	}
	if (c > 0)
	{
		int x;
		x = c / 100;
		switch (x)
		{
			case 1:
				cout << "C";
				break;
			case 2:
				cout << "CC";
				break;
			case 3:
				cout << "CCC";
				break;
			case 4:
				cout << "CD";
				break;
			case 5:
				cout << "D";
				break;
			case 6:
				cout << "DC";
				break;
			case 7:
				cout << "DCC";
				break;
			case 8:
				cout << "DCCC";
				break;
			case 9:
				cout << "CM";
				break;
		}
	}
	if (b > 0)
	{
		int x;
		x = b / 10;
		switch (x)
		{
			case 1:
				cout << "X";
				break;
			case 2:
				cout << "XX";
				break;
			case 3:
				cout << "XXX";
				break;
			case 4:
				cout << "XL";
				break;
			case 5:
				cout << "L";
				break;
			case 6:
				cout << "LX";
				break;
			case 7:
				cout << "LXX";
				break;
			case 8:
				cout << "LXXX";
				break;
			case 9:
				cout << "XC";
				break;
		}
	}
	if (a > 0)
	{
		int x;
		x = a;
		switch (x)
		{
			case 1:
				cout << "I";
				break;
			case 2:
				cout << "II";
				break;
			case 3:
				cout << "III";
				break;
			case 4:
				cout << "IV";
				break;
			case 5:
				cout << "V";
				break;
			case 6:
				cout << "VI";
				break;
			case 7:
				cout << "VII";
				break;
			case 8:
				cout << "VIII";
				break;
			case 9:
				cout << "IX";
				break;
		}
	}

	cout << "\n\n" << endl;

	system("pause");
	return 0;
}
