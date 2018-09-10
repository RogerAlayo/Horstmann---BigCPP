#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
	int x = 0;
	int y = 0;
	int sum = 0;

	cout << "Enter x: " << endl;
	cin >> x;
	cout << "Enter y: " << endl;
	cin >> y;

	sum = x + y;

	cout << "Sum: " << sum << endl;
	cout << "Difference of x-y: " << x - y << endl;
	cout << "Difference of y-x: " << y - x << endl;

	cout << "Product: " << x* y << endl;
	cout << "Average: " << x + y / sum << endl;

	cout << "Distance from x to y: " << abs(x) - abs(y) << endl;
	cout << "Distance from y to x: " << abs(y) - abs(x) << endl;

	if (x < y)
	{
		cout << "Max: " << y << endl;
	}
	else if (y < x)
	{
		cout << "Max: " << x << endl;
	}
	else (x == y)
	{
		cout << " They are equal";
	}

	if (x < y)
	{
		cout << "Min: " << x << endl;
	}
	else if (y < x)
	{
		cout << "Min: " << y << endl;
	}
	else (x == y)
	{
		cout << " They are equal";
	}
	
	//Better Max & Min alternative:
	//For Max: cout << (abs(x - y) + x + y) / 2 << endl;
	//For Min: cout << (x+y - abs(x-y))/2 <<endl;

	system("pause");
	return 0;
}