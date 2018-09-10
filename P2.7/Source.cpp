#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
	int length1 = 0;
	int length2 = 0;
	int length3 = 0;
	int angle = 0;
	int angle2 = 0;
	int angle3 = 0;
	string confirm;
	const float PI = 3.14;
	
	cout << "Enter the length of two sides of a triangle: " << endl;
	cin >> length1 >> length2;

	cout << "Enter the size of the angle between the two sides (in degrees): " << endl;
	cin >> angle;

	cout << "\nAre you sure the angle is in degree and not radians? (y/n): " <<endl;
	cin >> confirm;
	
	while (confirm != "n" || "N" || "no" || "No")
	{
		if (confirm == "y" || confirm == "Y" || confirm == "yes" || confirm == "Yes")
		{
			angle = angle * PI / 180;

			length3 = sqrt(pow(length1, 2) + pow(length2, 2));
			cout << "\nDiagonal: " << length3 << endl;

			angle2 = (pow(length3, 2) + pow(length1, 2) - pow(length3, 2)) / (2 * length3 * length2);
			cout << "The angle between length2 and length3 is: " << angle2 << endl;

			angle3 = (pow(length3, 2) - pow(length1, 2) + pow(length3, 2)) / (2 * length3 * length1);
			cout << "The angle between length3 and length1 is: " << angle3 << endl;

			system("pause"); 
			return 0; //U need to put this here inside the if statement so the program will end here
					  //and not just finish w/ if/else statements and still output the cout statement
					  //"Are you sure the angle is in degree..." and continue the while loop

					//if u want the program to contiue asking for lengths and angles, then don't end this if statement here
		}
		else
		{
			cout << "\nPlease enter the angle in degrees! " << endl;
			cin >> angle;
		}

		cout << "\nAre you sure the angle is in degree and not radians? (y/n): " << endl;
		cin >> confirm;
	}
	
	
	system("pause");
	return 0;
}
