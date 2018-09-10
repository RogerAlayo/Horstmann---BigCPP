#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int main()
{
	int year = 0;

	cout << "Enter a year: " << endl;
	cin >> year;

	if (year % 4 == 0 || year % 400 == 0 && year % 100 != 0)
	{
		cout << "This year is a leap year" << endl;
	}
	else
	{
		cout << "This year is not a leap year" << endl;
	}
	
	system("pause");
	return 0;
}