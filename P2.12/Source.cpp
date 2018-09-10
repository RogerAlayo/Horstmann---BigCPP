#include <iostream>
#include <string>

using namespace std;

int main()
{
	string num;
	int num2 = 0;
	string num3;
	string num4;
	string num5;

	cout << "Enter a integer >= 1,000 (Must include comma): " << endl;
	cin >> num;

	num2 = num.size();
	num3 = num.erase(num2 - 4, 1);
	cout << "Your # is: " << num3 << endl;
	
	//OR

	/*
	string number;
	string thousand;
	string remainder;
	int len = 0;

	cout << "Please enter an integer >= 1000: ";
	cin >> number;

	len = number.length();
	thousand = number.substr(0, len - 3);
	cout << thousand << endl;
	remainder = number.substr(len - 3, 3);

	cout << "Number with comma: " << thousand << "," << remainder << endl;

	*/

	system("pause");
	return 0;
}
