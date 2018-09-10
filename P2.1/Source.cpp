#include"../../std_lib_facilities.h"

int main()
{
	//This program only works if num is a float type
	//if it were declared as int type, it won't work
	//cuz int range is too low for 1E11
	//but a float range is large enough for 1E11

	float num = 1;
		
	while (num <= 100000000001)
	{
		cout << num << endl;
		num = num * 10;
	}
	
	system("pause");
	return 0;
}
