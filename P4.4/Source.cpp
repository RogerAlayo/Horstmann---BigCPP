#include <iostream>

using namespace std;
/*
The function sort2() takes integers
as parameters and swaps the numbers
if the first number is greater
than second number

The fn sort2() cannot compute its
result when a value == b value

@param a is an integer that contains address of 1st #
@param b is an integer that contains address of 2nd #
@return none since void type
*/
void sort2(int&a, int&b)
{
	if (a > b)
	{
		a = a - b;
		b = a + b;
		a = b - a;
	}
	else
	{
		a = a;
		b = b;
	}
}
/*
The function sort3() sorts 3 numbers
by calling sort2() 4 times
@param a is an int that contains address of 1st #
@param b is an int that contains address of 2nd #
@param c is an int that contains address of 3rd #
@return none since void type
*/

void sort3(int &a, int &b, int &c)
{
	sort2(a, b);
	sort2(b, c);
	sort2(a, b);
	sort2(b, c);
}

int main()
{
	int v = 33;
	int w = 14;
	int x = 18;

	sort3(v, w, x);

	cout << v << '\t' << w << '\t' << x << endl;

	system("pause");
	return 0;
}