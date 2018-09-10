#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
	int length1 = 0;
	int length2 = 0;
	int length3 = 0;
	float angle = 0;
	float angle2 = 0;
	float angle3 = 0;
	string confirm;
	const float PI = 3.14;

	cout << "Enter the length of a side of a triangle: " << endl;
	cin >> length1;

	cout << "Enter the sizes of the angles (in degrees): " << endl;
	cin >> angle >> angle2;

	cout << "\nAre you sure that the angles are in degrees and not radians? (y/n): " << endl;
	cin >> confirm;

	while (confirm != "n" || "N" || "no" || "No")
	{
		if (confirm == "y" || confirm == "Y" || confirm == "yes" || confirm == "Yes")
		{
			//angle = angle * PI / 180;

			length2 = (length1 / sin(angle)) * sin(angle2);
			cout << "\hypothenuse length: " << length2 << endl;

			angle3 = 180 - angle2 - angle;
			cout << "The angle between length2 and length1 is: " << angle3 << endl;

			length3 = (length1 / sin(angle)) * sin(angle3);
			cout << "Length3 is: " << angle2 << endl;

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
