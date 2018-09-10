#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
	double radius = 0;
	double area_formula = 0;
	const double PI = 3.14;

	cout << "Enter a radius: " << endl;
	cin >> radius;

	cout << "Area of Circle: " << PI * radius * radius << endl;
	cout << "Circumference of Circle: " << 2* PI * radius * radius << endl;
	cout << "Volume of Sphere: " << 4 * PI * pow(radius, 3) / 3 << endl;
	cout << "Surface area of Sphere: " << 4 * PI * radius * radius << endl;

	system("pause");
	return 0;
}