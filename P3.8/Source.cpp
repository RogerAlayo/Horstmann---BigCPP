#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <math.h>	//for ceil()
#include <ctype.h>	//do u really need this for isalpha and islower, etc?

using namespace std;
int main()
{
	float num1, num2;
	int x, y, s1, s2, i1, i2;

	cout << "Enter two floating-point numbers: " << endl;
	cin >> num1 >> num2;

	x = num1 * 100; //convert decimal part into int
	y = num2 * 100; //convert decimal part into int
	i1 = x % 10; //dissects the ones value
	s1 = x % 100; // dissects the tens value
	i2 = y % 10; // dissects the hundreds value
	s2 = y % 100; // dissects the thousands value

	if (s1 > 9)
	{
		s1 = s1 % 10;
	}
	else
	{
		s1 = s1;
	}
	if (s2 > 9)
	{
		s2 = s2 % 10;
	}
	else
	{
		s2 = s2;
	}

	if (i1 == i2 && s2 == s2)
	{
		cout << "They are the same up to 2 decimal places " << endl;
	}
	else
	{
		cout << "They are different " << endl;
	}


	/* TESTING:
	cout << "x = num1 * 100: " << x << endl;
	cout << "y = num2 * 100: " << y <<endl;
	cout << "i1 = x % 10: " << i1 <<endl;
	cout << "s1 = x % 100: " << s1 << endl;
	cout << "i2 = y % 10: " << i2 << endl;
	cout << "s2 = y % 100: " << s2 << endl;
	*/
	system("pause");
	return 0;
}