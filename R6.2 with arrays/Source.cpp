#include <iostream>
using namespace std;

int main()
{
	const int CAPACITY = 10;	//Must be declared as const or can't put inside array brackets [], also note it can be declared as int const or const int
	int array[CAPACITY] = {0};
	int size = 0;

	for (int i = 0; i < CAPACITY; i++)
	{
		size = i;
		array[size] = rand() % 100 + 1;

		for (int j = 0; j < size; j++)
		{
			if (array[j] == array[size])
			{
				array[i]--;	//dont use size cuz we are trying to go back 1 element and start outter loop from there
							//used array[i]--; instead of i--;
			}
		}
		cout << array[size] << endl;
	}

	char endProg;
	cout << "\n\n" "End of program\n";
	cout << "Type 'Q' to exit.\n";
	cin >> endProg;

	return 0;
}
