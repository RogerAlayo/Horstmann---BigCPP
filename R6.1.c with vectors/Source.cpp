#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int MAX = 10;	//max_size

	vector <int> v(MAX);
	int n =1;

	for (int i = 0; i < v.size(); i++)
	{
		v[i] = pow(n,2);
		
		cout << i << '\t' << n << '\t' << v[i]<<endl;
		n++;
	}

	cout << endl;

	system("pause");
	return 0;
}