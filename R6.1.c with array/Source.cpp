#include <iostream>

using namespace std;

int main()
{
	const int MAX = 10;
	int a[MAX];
	int a_size;
	int n = 1;

	for (a_size = 0; a_size < MAX; a_size++)
	{
		a[a_size] = pow(n, 2);
		n++;

		cout << a[a_size] << endl;
	}

	system("pause");
	return 0;
}