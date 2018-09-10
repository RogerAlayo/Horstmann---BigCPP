#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <math.h>	//for ceil()
#include <ctype.h>	//do u really need this for isalpha and islower, etc?

using namespace std;
int main()
{
	float num = 0;
	char grade[2];
	float frac = 0;
	float num1 = 0;
	int z = 0;
		
	cout << "Enter # grade: " << endl;
	cin >> num;

	frac = modf(num, &num1); //grade = reg num, num1 = int part, frac = frac part (all these guys need to be of type float/double)

	if (frac >= 0.5)
	{
		num1 = ceil(num);		//round up
	}
	else
	{
		num1 = floor(num);	//round down
	}

	z = num1;	// changed float to int since switch only deals with char, int, or enumeration

	switch (z)
		{
			case '4':
				grade[0] = 'A';
				break;
			case '3':
				grade[0] = 'B';
				break;
			case '2':
				grade[0] = 'C';
				break;
			case '1':
				grade[0] = 'D';
				break;
			case '0':
				grade[0] = 'F';
				break;
		}

	cout << grade[0] << endl << endl;

	if (frac >= 0.85)
	{
		grade[1] = '+';
	}
	else if (frac <= 0.3)
	{
		grade[1] = '-';
	}	
	
	cout << "Grade: ";
	
	for (int i = 0; i < 2; i++)
	{
		cout << grade[i];
	}

	system("pause");
	return 0;
}