//WITHOUT BREAK
//CTRL + Z + ENTER == ENDS INPUT STREAM

//since no cin.eof(), u only have cin.fail()
//however u can't differentiate if the stream ended
//cuz failed input or user intentionally ended stream w/ Ctrl + z + enter

//U would think why not 2 cin.fail() w/ else instead of cin.eof() inside a cin.fail() w/else
//but that doesn't work either cuz cin.fail() fails for anything, so if user
//intentionally fails it or wrong input, the second cin.fail() will automatically 
//execute and the else part which denotes that it failed cuz of wrong input would 
//never execute

//therefore, u NEED an cin.eof() to differentiate if user intentionally fails input

//Note: don't forget the extra system("pause")'s and return 0's inside 
//the first cin.fail() for first example and first cin.eof() for second example.
//We used them so the program would end there and not continue to run into next 
//if statements


#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool increment = true;
	string name;
	float salary = 0;
	

	while (increment)
	{
		cout << "Enter Employeed name: " << endl;
		cin >> name ;
		if (cin.fail())
		{
			name = " ";
			cout << "Wrong input start over" << endl;
			increment = false;
			
			system("pause"); //Need this here
			return 0; //if not it will go to the next if statement 
					  //and automatically make it fail
		}

		cout << "Enter salary: " << endl;
		cin >> salary;
		if (cin.fail())
		{
			salary = 0; //if u don't put this here, then even 
						//if u input wrong type it will still 
						//calculate salary one last time using last value
						//UNLESS I just use: break;
			cout << "Please only enter digits, start over" << endl; //error message
			increment = false; // alternative: break;
		}
		
		salary = salary + (salary * 0.05);
		cout << salary << endl;
	}

	system("pause");
	return 0;
}


//WITH BREAK (apparently clearer and will save memory than 1st example above)
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool increment = true;
	string name;
	float salary = 0;


	while (increment)
	{
		cout << "Enter Employeed name: " << endl;
		cin >> name;
		if (cin.fail())
		{
			if (cin.eof())
			{
				cout << "End of input, you may exit" << endl;
				system("pause");
				return 0;
			}
			else
			{
				cout << "Wrong input, please start over" << endl;
				break; //will fail this loop and go to whatever is left in code after while loop
			}
		}

		cout << "Enter salary: " << endl;
		cin >> salary;
		if (cin.fail())
		{
			if (cin.eof())
			{
				cout << "End of input, you may exit" << endl;
				system("pause");
				return 0;
			}
			else
			{
				cout << "Wrong input, please start over" << endl;
				break;  //will fail this loop and go to whatever is left in code after while loop
			}
		}

		salary = salary + (salary * 0.05);
		cout << salary << endl;
	}

	system("pause");
	return 0;
}
*/


//THIRD OPTION WHICH DOESN"T WORK
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
string name;
float salary = 0;

while (!cin.eof())
{
cout << "Enter Employee name: " << endl;
cin >> name;
if (cin.fail())
{
cout << "Wrong input, start over" << endl;
//system("pause");
//return 0;
}

cout << "Enter salary: " << endl;
cin >> salary;
if (cin.fail())
{
cout << "Wrong input, start over" << endl;
//system("pause");
//return 0;
}

salary = salary + (salary * 0.05);
cout << salary << endl;
}
cout << "End of input, you may exit" << endl;

system("pause");
return 0;
}
*/
