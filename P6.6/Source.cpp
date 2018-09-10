#include <iostream>

using namespace std;

void combine(int [], int [], int [], int);
void sort(int [], int);	//cannot make this const
void print(int[], int);

int main()
{
	const int MAX = 9;
	int arr1[] = { 1, 4, 9, 16 };
	int arr2[] = { 4, 7, 9, 9, 11 };
	int merge[MAX] = { 0 };

	combine(arr1, arr2, merge, MAX);
	sort(merge, MAX);
	print(merge, MAX);

	system("pause");
	return 0;
}

void combine(int a1[], int a2[], int m[], int MAX)
{
	for (int i = 0; i <= 4; i++)
	{	
		if (i == 4)
		{
			m[4+i] = a2[i];
			break;
		}
		m[i] = a1[i];
		m[4 + i] = a2[i];	
	}		
}

void sort (int m[], int MAX)	//WHY? - can't make this into const or lvalue is notmodifiable?
{
	int temp = 0;

	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < i; j++)// make sure everything in code block is j not i
		{
			if (m[j] > m[j + 1])	//if i instead of j, then code won't work
			{
				temp = m[j];
				m[j] = m[j + 1];
				m[j + 1] = temp;
			}
			else if (m[j] == m[j + 1])
			{
				m[j] = m[j];
				m[j++] = m[j];
			}
		}
	}
}

void print(int m[], int MAX)
{
	for (int i = 0; i < MAX; i ++)
	{
		cout << m[i] << endl;
	}
}