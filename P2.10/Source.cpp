#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
	double gallons = 0;
	double efficiency = 0;
	double price = 0;
	double distance = 0;
	double cost_per_mile = 0;
	double cost_per_100_miles = 0;

	cout << "Enter # of gallons of gas in tank: " << endl;
	cin >> gallons;

	cout << "Enter fuel efficiency of gas per gallon (miles/gallon): " << endl;
	cin >> efficiency;

	cout << "Enter price of gas per gallon: " << endl;
	cin >> price;

	distance = gallons * efficiency;
	cost_per_mile = efficiency / price;
	cost_per_100_miles = 100 * price / efficiency;

	cout << "Distance: " << distance << " miles" << endl;
	cout << "Cost per mile: " << cost_per_mile << " dollars" << endl;
	cout << "Total cost per 100 miles: " << cost_per_100_miles << " dollars" << endl;
	
	system("pause");
	return 0;
}