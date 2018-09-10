#include <iostream>
#include <string>
#include <cmath>	//not used just taken from last progream
#include <ctype.h>	//used for C fns like islower and isalpha
#include <cstdio>	//usually used when doing printf but we don't use this here
#include <iomanip>	//need for setprecision

using namespace std;
int main()
{
	char grade[3];	//what does 3 mean? position? or initialization?
	float num = 0;
	
	cout << "Enter letter grade: " << endl;
	cin >> grade;

	if (isalpha(grade[0]))
	{
		if (islower(grade[0]))
		{
			grade[0] = toupper(grade[0]);
		}
		switch (grade[0])
		{
		case 'A':

			num = 4.0;
			break;
		case 'B':
			num = 3.0;
			break;
		case 'C':
			num = 2.0;
			break;
		case 'D':
			num = 1.0;
			break;
		case 'F':
			num = 0.0;
			break;
		}
	if( grade[0] == 'A' && grade[1] == '+')
	{
		num = 4.0;
	}
	else if (grade[0] != 'F')
		{
			/*
			if (grade[1] == '+')
			{
				num += 0.3;
			}
			else if (grade[1] == '-')
			{
				num -= 0.3;
			}
			*/
			//OR
			
			switch(grade[1])	//b4, I put 3 inside brackets of grade but I think the # means for position
			{
			case '+':
				num += 0.3;
				break;	//If no break here then next case will execute 
						//even if user did not input '-', so always put in break
			case '-':
				num -= 0.3;	
				break;		
			}
			
		}
	}
		//fixed & set precision so float output displays as 4.0 and not just 4 which it displays by default
		cout << fixed << setprecision(1) << "The Numeric Value is: " << num << endl;	
		
		system("pause");
		return 0;
}
