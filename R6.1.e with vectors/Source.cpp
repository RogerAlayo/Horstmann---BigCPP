#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int MAX = 9;

	vector <int> v(MAX);
	int i;
	int n = 1;

	for (i = 0; i < 4; i++)
	{
		v[i] = pow(n, 2);
		n++;
		cout << v[i] << endl;
	}

	int r = i;
	int a = 9;

	for (r = i; r < 6; r++)
	{
		v[r] = a;
		a -= 2;
		cout << v[r] << endl;
	}

	v[6] = 4;
	v[7] = 9;
	v[8] = 11;

	cout << v[6] << '\n' << v[7] << '\n' << v[8] << endl;

	system("pause");
	return 0;
}