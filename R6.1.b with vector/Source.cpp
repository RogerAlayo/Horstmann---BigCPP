#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int MAX = 11;	//max_size
	
	vector <int> v(MAX);
	int n = 0;
	
	for (int i = 0; i < v.size(); i++)
	{
		v[i] = n*2;
		n++;
		cout << v[i];
	}
	cout << endl;

	system("pause");
	return 0;
}