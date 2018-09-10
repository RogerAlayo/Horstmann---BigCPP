#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
	double meters = 0;
	double meter_to_miles = .000621371;
	double meter_to_feet = 3.28084;
	double meter_to_inches = 39.3701;

	cout << "Enter your measurement in meters:" << endl;
	cin >> meters;

	cout << "The following are your conversions:" << endl;
	cout << "Meters to miles: " << meters * meter_to_miles << endl;
	cout << "Meters to feet: " << meters * meter_to_feet << endl;
	cout << "Meters to inches: " << meters * meter_to_inches << endl;
	
	system("pause");
	return 0;
}