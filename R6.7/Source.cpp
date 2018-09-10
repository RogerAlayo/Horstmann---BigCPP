#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int MAX = 10;

	vector <int> v(MAX);
	int i;
	int n = 1;

	for (i = 0; i < v.size(); i++)
	{
		v[i] = pow(n, 2);
		n++;
		cout << v[i] << endl;
	}

	system("pause");
	return 0;
}