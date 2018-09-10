#include <iostream>
#include <vector>
//#include <cstdlib>

using namespace std;

int main()
{
	const int MAX = 10;

	vector <int> v(10,0);	//this constructor creates 10 elements and
							//fills each element with 1's
	for (int i = 0; i < v.size(); i++)
	{
		v[i] = rand() % 99 + 2;
		
		for (int j = 0; j < i; j++)
		{
			if (v[i] == v[j])
				--i;	//Q: WHAT IS THIS LINE DOING?
		}
		cout << v[i] << endl;
	}


	system("pause");
	return 0;
}