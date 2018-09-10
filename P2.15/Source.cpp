#include "../../std_lib_facilities.h"
using namespace std;

int main()
{
	string num = "16384"; //input can only be 5 digits
	int num2 = 0;
	string num3, num4, num5, num6, num7;
	
	num2 = num.length(); //length starts count at 0 and ends at 4
	num3 = num.substr(num2 - 5, 1); //this starts at position -1 which works for substr., goes over 1
	num4 = num.substr(num2 - 4, 1); //starting at position 0, goes over 1
	num5 = num.substr(num2 - 3, 1); //starting at position 1, goes over 1
	num6 = num.substr(num2 - 2, 1); //starting at position 2, goes over 1
	num7 = num.substr(num2 - 1, 1); //starting at position 3, goes over 1
	
	cout << num3 << " " << num4 + " " + num5 + " " + num6 
		<< " " << num7 << endl;

	system("pause");
	return 0;
} 