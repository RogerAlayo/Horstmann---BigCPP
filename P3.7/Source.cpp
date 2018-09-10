/*Lexicographical order: is intuitively backwards:
a comes before b which comes before c but because so
then a = 97, b = 98, c = 99 in ASCII so when using 
< or > to compare, remember that the < > operators will
compare thier ASCII translation, not the actual letters themselves.
Therefore c>b>a not a>b>c
*/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <math.h>	//for ceil()
#include <ctype.h>	//do u really need this for isalpha and islower, etc?

using namespace std;
int main()
{
	string n1, n2, n3;
	string max1, max2, max3;

	cout << "Enter names: " << endl;
	cin >> n1 >> n2 >> n3;

	//Lexicographical order: c > b > a cuz c ==99, b ==98, a ==97
	if (n1 > n2 && n1 > n3)	
	{
		if (n2 > n3)
		{
			max1 = n1;
			max2 = n2;
			max3 = n3;
		}
		else if (n3 > n2)
		{
			max1 = n1;
			max2 = n3;
			max3 = n2;
		}
	}
	
	if (n2 > n1 && n2 > n3)
	{
		if (n1 > n3)
		{
			max1 = n2;
			max2 = n1;
			max3 = n3;
		}
		else if (n3 > n1)
		{
			max1 = n2;
			max2 = n3;
			max3 = n1;
		}
	}
	else if (n3 > n1 && n3 > n2)
	{
		if (n1 > n2)
		{
			max1 = n3;
			max2 = n1;
			max3 = n2;
		}
		else if (n2 > n1)
		{
			max1 = n3;
			max2 = n2;
			max3 = n1;
		}
	}

	cout << max3 << " " << max2 << " " << max1 << endl; //have to put it backwards cuz a = 97, b = 98, c = 99

	system("pause");
	return 0;
}

/*
#include <iostream> 
#include <string> 
using namespace std;
int main() {
	string a, b, c;
	cout << "Enter text: "; cin >> a;
	cout << "Enter text: "; cin >> b;
	cout << "Enter text: "; cin >> c;
	string *x, *y, *z;
	if (a > b) { x = &b; y = &a; }
	else { x = &a; y = &b; }
	if (*x > c) { z = x; x = &c; }
	else z = &c;
	if (*y > *z) { string *t = y; y = z; z = t; }
	cout << *x << endl;
	cout << *y << endl;
	cout << *z << endl;

	system("pause");
	return 0;
}
*/