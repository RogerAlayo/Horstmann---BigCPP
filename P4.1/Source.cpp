#include <iostream>

using namespace std;
/*
The function sort2() takes integers
as parameters and swaps the numbers
if the first number is greater 
than second number

The fn sort2() cannot compute its
result of when a value == b value

@param a and b are integer numbers to be swapped
no returns
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

int main()
{
	int u = 2;
	int v = 3;
	int w = 4;
	int x = 1;

	sort2(u, v);
	sort2(w, x);
	
	cout << u << '\t' << v << '\n'
	<< w << '\t' << x << endl;

	system ("pause");
	return 0;
}