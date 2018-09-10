#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() 
{
	int month = 0, day = 0;

	cout << "Enter a month as an integer: " << endl;
	cin >> month;

	switch (month)
	{
		case 1:
			cout << "31 days" << endl;
			break;
		case 2:
			cout << "28 or 29 days" << endl;
			break;
		case 3:
			cout << "31 days" << endl;
			break;
		case 4:
			cout << "30 days" << endl;
			break;
		case 5:
			cout << "31 days" << endl;
			break;
		case 6:
			cout << "30 days" << endl;
			break;
		case 7:
			cout << "31 days" << endl;
			break;
		case 8:
			cout << "31 days" << endl;
			break;
		case 9:
			cout << "30 days" << endl;
			break;
		case 10:
			cout << "31 days" << endl;
			break;
		case 11:
			cout << "30 days" << endl;
			break;
		case 12:
			cout << "31 days" << endl;
			break;
	}

	system("pause");
	return 0;
}