#include "../../std_lib_facilities.h"
using namespace std;

int main()
{
	double due = 0;
	double paid = 0;
	double change = 0;
	double cents = 0;
	double integral = 0;
	double pennies_worth = .01;
	double quarters_worth = .25;
	double dimes_worth = .10;
	double nickels_worth = .05;
	int dollars = 0;
	int count = 0;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;

	cout << "How much is due: " << endl;
	cin >> due;

	cout << "How much was paid: " << endl;
	cin >> paid;

	change = due - paid;
	cents = modf(change, &integral); //modf = separates integral from frac part, 
									 //stores integral part into the variale that has &, and
									 //store frac part in cents
	//printf("%f = %f + %f \n", change, integral, cents); //output: 2.50 = 2.000 + .5000
	dollars = integral;
	cout << "\nPlease return to the customer the following: " << endl;
	cout << "Dollars: " << dollars << endl;

	while (cents >= quarters_worth)
	{
		count++;
		cents = cents - quarters_worth;
	}
	cout << "Quarters: " << count << endl;
		
	while (cents >= dimes_worth)
	{
		count1++;
		cents = cents - dimes_worth;
	}
	cout << "Dimes: " << count1 << endl;
	
	while (cents >= nickels_worth ) //somehow .05 !==.05
	{
		count2++;
		cents = cents - nickels_worth;
	}
	cout << "Nickels: " << count2 << endl; //why won't it read
	
	while (cents >= pennies_worth) //somehow won't read .01
	{
		count3++;
		cents = cents - pennies_worth;
	}
	cout << "Pennies: " << count3 << endl << endl; //won't read either

	system("pause");
	return 0;
}