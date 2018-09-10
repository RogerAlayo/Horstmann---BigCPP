#include <iostream>
#include "ccc_empl.h"
#include <string>
#include <iomanip>

using namespace std;
int main()
{	
	string name;
	float o_salary,salary_hour, salary, hours, overtime;
	
	Employee person("Roger", 48000.00); //salary in per year

	name = person.get_name();
	salary = person.get_salary();
	salary_hour = salary / (52 * 40);	//convert to per hour
	
	cout << "How many hours worked: " << endl;
	cin >> hours;

	if (hours > 40)
	{
		overtime = hours - 40;
		o_salary = (salary_hour * 1.5) * overtime;
		salary = (40 * salary_hour) + o_salary;
	}
	
	else
	{
		salary = hours * salary_hour;
	}
	
	cout << fixed << setprecision(2) <<  "pay: $" << salary << endl;

	system("pause");
	return 0;
}