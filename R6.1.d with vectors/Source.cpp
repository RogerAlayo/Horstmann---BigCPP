#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int MAX = 10;

	vector <int> v(MAX);
	int i;
	int x = 0;

	for (i = 0; i < v.size(); i++)
	{
		v[i] = x;

		cout << v[i] << endl;
	}

	system("pause");
	return 0;
}