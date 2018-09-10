#include <iostream>
using namespace std;

void read_data(int array[], int CAPACITY, int& size);
int max(const int array[], int size);
int min(int array[], int size);

int main()
{
	const int CAPACITY = 10;
	int array[CAPACITY] = {0};
	int size = 0;
	int highest = 0;
	int lowest = 0;

	read_data(array, CAPACITY, size);
	highest = max(array, size);
	lowest = min(array, size);

	cout << "Highest: " << highest << endl;
	cout << "Lowest: " << lowest << endl;

	char endProg;
	cout << "\n\n" "End of program\n";
	cout << "Type 'Q' to exit.\n";
	cin >> endProg;

	return 0;
}

/*
	Precond: none
	Postcond: array of 10 elements will filled with random numbers between 1-100 through loop
	@param array = the array to fill
	@param CAPACITY = max size of array
	@param a_size = size of array after every loop iteration
*/
void read_data(int array[], int CAPACITY, int& size)	//need to pass in the actual array name (ex: array not a)
{
	for (int i = 0; i < CAPACITY; i++)	//IF I PUT 11 INSTEAD OF CAPACITY, THE ARRAY DOESN'T GIVE GARBAGE VALUE FOR ARRAY[11], WHY? SINCE THE ARRAY SIZE IS ONLY 10
	{
		size = i;
		array[size] = rand() % 100 + 1;

		cout << array[size] << endl;
	}
	//cout << endl << array[10] << endl;
}

/*
	Precond: array of 10 elements will be inspected, each element will be inspected and compared to previous highest value
	Postcond: returns highest value in array
	@param array = the array to be inspected
	@param a_size = current size of array 
*/
int max(const int array[], int size)	//Don't forget const since array not being modified
{
	if (size == 0)
		return 0;
	int high = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > high)
			high = array[i];
	}
	return high;
}

/*
Precond: array of 10 elements will be inspected, each element will be inspected and compared to previous lowest value
Postcond: returns lowest value in array
@param array = the array to be inspected
@param a_size = current size of array
*/
int min(int array[], int size)
{
	if (size == 0)
		return 0;
	int low = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < low)
			low = array[i];
	}
	return low;
}