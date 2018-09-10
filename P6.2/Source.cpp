#include <iostream>

using namespace std;

int square(int [], int);
int alternating_sum(int [], int);

int main()
{
	const int MAX = 9;
	int num[MAX] = { 0 };
	int result = 0;

	square(num, MAX);
	result = alternating_sum(num, MAX);
	
	cout << result << endl;

	system("pause");
	return 0;
}

int square(int n[], int m)
{
	int sq = 0;

	n[0] = 1;
	for (int i = 1; i < m; i++)
	{
		double sq = i + 1;
		n[i] = sq * sq;
	}

	return sq;
}


int alternating_sum(int n[], int m)
{
	int i = 1;
	int j = 0;
	int sum = 1;
	while (i < m && j < m)
	{
		sum -= n[i];
		i+=2;
		if (i > m)
			break;
		j = i - 1;
		if (j > 0)
		{
			sum += n[j];
		}
	}
	/*works for m = 9 and m = 11 but not m = 8 and m = 10
	for (int i = 0; i < m; i+=2)
	{
		sum += n[i];
		j = i - 1;

		if (j > 0)
		{
			sum -= n[j];
		}
	}*/	
	return sum;
}