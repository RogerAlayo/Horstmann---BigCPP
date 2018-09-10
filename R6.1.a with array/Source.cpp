#include <iostream>

using namespace std;

int main()
{
	const int MAX = 10;	//max_size
	int a_size = 0;	//companion variable

	int a[MAX];
	int n = 1;

	for (int i = 0; i < MAX; i++)
	{
		a_size = i;
		a[a_size] = n;
		n++;
		cout << a[a_size] << endl;
	}
	//cout << a[a_size] << endl;	//won't thrown out of bounds exception like with vector
									//It will compile but give garbage value

	system("pause");
	return 0;
}