#include <iostream>

using namespace std;

int main()
{
	const int MAX = 11;
	int a_size = 0;

	int a[MAX];
	int n = 0;

	for (a_size = 0; a_size < MAX; a_size++)
	{
		a[a_size] = n * 2;
		n++;
		cout << a[a_size];
	}

	system("pause");
	return 0;
}