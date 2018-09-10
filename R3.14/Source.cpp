#include "../../std_lib_facilities.h"
using namespace std;

int main()
{
	float gpa = -1;

	cout << "What is your GPA: " << endl;
	cin >> gpa;

	if (gpa >= 1.5)		//if gpa less than 1.5 none of the if statements will go thru
	{
		if (gpa < 2.0)	//if gpa >=1/5 then gpa has to pass this if statement
			cout << "Your on probation" << endl;
	}
	else if (gpa < 1.5)
		cout << "Your dismissed" << endl;
		
	system("pause");
	return 0;
}
/*
Note:
if ()
	if()
		cout...
*This nested if statement is like having 
one if statement with two tests separated with &&: if (gpa >= 1.5 && gpa < 2.0)

**BUT: && is better keeps it all in one if statement so 
	its' else statement is with the only if statement there

*However, 2 things:
1. If the first if statement doesn't pass, the others won't execute either
2. dangling else statement - u want the else statement to be associated w/
first statement but its not, unless u put in the {}
 U NEED to have {} around the second if statement so
 its clear who the else statement belongs too
*/