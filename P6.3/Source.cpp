#include <iostream>

using namespace std;

void buildArr(int [], int);
void printReverse(int [], int , int []);

int main()
{
	const int MAX = 9;
	int num[MAX] = { 0 };
	int reverse[MAX] = { 0 };

	buildArr(num, MAX);
	printReverse(num, MAX, reverse);
	
	system("pause");
	return 0;
}

void buildArr(int num[], int MAX)
{
	bool more = true;
	cout << "Enter digits: " << endl;
	while (more)
	{
		for (int i = 0; i < MAX; i++)
		{
			cin >> num[i];
		}

		more = false; //If I don't put this here the user keeps puttin in #'s for array forever 
					  //since the loop is constantly restarting - after 9 elements are filled
	}
}

void printReverse(int num[], int MAX, int reverse[])
{
	for (int i = MAX-1; i >= 0; i--)
	{
		cout << endl << num[i] << endl;
	}
}