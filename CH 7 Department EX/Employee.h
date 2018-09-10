#ifndef Employee_H
#define Employee_H

#include <string>
using namespace std;

class Employee
{
public:
	Employee();
	Employee(string employee_name, double initial_salary);
	void set_salary(double new_salary);
	double get_salary() const;
	string get_name() const;
private:
	string name;
	double salary;
};
#endif