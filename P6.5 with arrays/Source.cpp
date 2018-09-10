#include <iostream>

using namespace std;

void merging(int [], int [], int [], int);
void print_merging( int [], int);

int main()
{
	const int MAX = 10;
	int num[] = { 1, 3, 5, 7, 9 };
	int pen[] = { 2, 4, 6, 8, 10 };
	int merge[MAX] = { 0 };

	merging(num, pen, merge, MAX);
	print_merging(merge, MAX);
	
	system("pause");
	return 0;
}

void merging(int n[], int p [], int m[], int MAX)
{
	int i = 0;
	int j = 0;

	while (i < 5 && j < MAX)
	{
		if (i == 5 || j == MAX)
		{
			break;
		}

		m[j] = n[i];
		j++;
		m[j] = p[i];
		j++;		//when forgot this line, output was only odds up to 10 and 4 zeros after
		i++;
	}
}

void print_merging(int m[], int MAX)
{
	for (size_t i = 0; i < MAX; ++i)
	{
		cout << m[i] << endl;
	}
}