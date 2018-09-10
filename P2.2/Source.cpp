#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
	int x= 1;
	int y = 1;

	while (x < 6)
	{
		cout << "When x = " << x << " and y = " << y << endl;
		cout << "Squares: " << pow(x, 2) << endl;
		cout << "Squares: " << pow(y, 2) << endl;
		
		cout << "Cubes: " << pow(x, 3) << endl;
		cout << "Cubes: " << pow(y, 3) << endl;
		
		cout << "Fourth powers: " << pow(x, 5) << endl;
		cout << "Fourth powers: " << pow(y, 4) << endl <<endl;
	
		x++;
		y++;
	}

	system("pause");
	return 0;
}