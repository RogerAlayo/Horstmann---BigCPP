#include <iostream>

using namespace std;

int main()
{
	const int MAX = 10;
	int a_size;
	double a[MAX];
	int n = 0;

	for (a_size = 0; a_size < MAX; a_size++)
	{
		a[a_size] = n;

		cout << a[a_size] << endl;
	}

	system("pause");
	return 0;

}