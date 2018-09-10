#include <iostream>

using namespace std;

void input(int [], int [], int);
bool equals(int [], int [], int);

int main()
{
	const int MAX = 5;
	int a1[MAX] = { 0 };
	int a2[MAX] = { 0 };
	//bool compare[] = {false};	//what are bool arrays? when u use them?
	
	input(a1, a2, MAX);
	bool decision = equals(a1, a2, MAX);

	if (decision == true)
		cout << "They are equal!" << endl;
	else
		cout << "NOT EQUAL" << endl;

	system("pause");
	return 0;
}

void input(int a1[], int a2[], int MAX)
{
	bool more = true;

	cout << "Enter elements of first array: " << endl;

	while (more)
	{
		for (int i = 0; i < MAX; i++)
		{
			cin >> a1[i];
		}
		
		more = false;
	}

	more = true;
	cout << "Enter elements of second array: " << endl;

	while (more)
	{
		for (int i = 0; i < MAX; i++)
		{
			cin >> a2[i];
		}
		
		more = false;
	}
}

bool equals(int a1[], int a2[], int MAX)
{
	bool decision = true;
	for (int i = 0; i < MAX; i++)
	{
		if (a1[i] != a2[i])		
		{
			decision = false;	//Don't put a return inside a test unless u want it to work like break;
		}
	}
	return decision;
}
