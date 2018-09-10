#include <iostream>

using namespace std;

int main()
{
	const int MAX = 9;

	int a[MAX];
	int i;
	int n = 1;

	for (i = 0; i < 4; i++)
	{
		a[i] = pow(n, 2);
		n++;
		cout << a[i] << endl;
	}

	int r = i;
	int p = 9;

	for (r = i; r < 6; r++)
	{
		a[r] = p;
		p -= 2;
		cout << a[r] << endl;
	}

	a[6] = 4;
	a[7] = 9;
	a[8] = 11;

	cout << a[6] << '\n' << a[7] << '\n' << a[8] << endl;

	system("pause");
	return 0;
}