#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
	string rows = "+--+--+--+\n|  |  |  |";
	int counter = 0;

	while (counter < 4)
	{
		cout << rows << endl;
		counter++;
	}

	system("pause");
	return 0;
}