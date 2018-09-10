#include <iostream>
#include <string>	//need for cout operator
#include <stdlib.h> //says u need for exit() 
					//but my code w/ exit() works w/o this header file
using namespace std;

double get_double(string prompt)
{
	double value = 0;
	cout << prompt << endl;
	cin >> value;
	return value;
}

int main()
{
	double salary = 0;
	double perc_raise = 0;

	salary = get_double("Please enter your salary: ");
	if (salary <= 0)
	{
		cout << "Invalid salary input" << endl;
		system("pause");
		exit(1);	//should I even use? why is it better than main?
	}
	
	perc_raise = get_double("What percentage raise would you like? ");
	if (perc_raise <= 0)
	{
		cout << "Invalid percent raise input" << endl;
		system("pause");
		exit(1);
	}

	cout << "Salary: " << salary << endl;
	cout << "Percent raise: " << perc_raise << endl;

	system("pause");
	return 0;
}

/*
I wrote two programs :

int main() 
{ 
	return 0; 
}

and

#include <stdlib.h>
int main() 
{
	exit(0) 
}

After executing gcc - S - O1.
Here is what I found watching at assembly (only important parts) :

main:
movl    $0, %eax    // setting return value 
ret                 // return from main 
and

main :
	subq    $8, %rsp    //reserving some space 
	movl    $0, %edi    // setting return value 
	call    exit        // calling exit function
						// magic and machine specific wizardry after this call 
	So my conclusion is : use return when you can, and exit() when you need.
*/