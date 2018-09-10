#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
	int length = 0;
	int width = 0;
	int area = 0;
	int perimeter = 0;
	double diagonal = 0;

	cout << "Enter the length and width of a rectangle: " << endl;
	cin >> length >> width;

	area = length * width;
	cout << "Area: " << area << endl;

	perimeter = 2 * (length + width);
	cout << "Perimeter: " << perimeter << endl;

	//even tho has int's as computation values, the result will be float
	//the reason is because sqrt(double) which, means only takes in double values
	//so the output of sqrt() will only be a double type, no matter what
	diagonal = sqrt(pow(length, 2) + pow(width, 2));
	cout << "Diagonal: " << diagonal << endl;
	
	system("pause");
	return 0;
}
