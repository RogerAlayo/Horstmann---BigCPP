/*A copy of the array never gets passed to the function. That would be inefficient,
especially if it is a huge array. Instead, the array[] in the parameter of the fn is
a pointer to the first element of the array num[].
This is why you cannot have an array as a return type for a function. There 
is no point in doing that because implicit array is editing the original array.

ALSO NOTE: array[] == num[], they are the same array. array[] is just an implicit parameter name;
*/
#include <iostream>
using namespace std;

void build_array(int [], int, int&); // NOTE: don't need names in fn protoypes, but don't forget [] for array
void display_array_reverse(const int [], int);

int main()
{
	const int CAPACITY = 10;
	int num[CAPACITY] = {0};
	int size = 0;

	build_array(num, CAPACITY, size);
	cout << endl;
	display_array_reverse(num, size);

	char endProg;
	cout << "\n\n" "End of program\n";
	cout << "Type 'Q' to exit.\n";
	cin >> endProg;
	return 0;
}

void build_array(int array[], int CAPACITY, int& size)	//When building array the size is a reference parameter
{
	for (int i = 0; i < CAPACITY; i++)
	{
		size = i;
		array[size] = rand() % 20 + 1;
	
		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
				array[i]--;		//Q: IF I CHANGE THIS TO i--; WHY DO RANDOM #'S APPEAR?
		}
		cout << array[size] << endl;
	}
}

void display_array_reverse(const int array[], int size)
{
	while (size >= 0)
	{
		cout << array[size] << endl;
		size--;
	}
}