#ifndef Department_H
#define Department_H

#include "Employee.h"

class Department
{
public:
	Department();
	Department(string n);
	void set_receptionist(Employee *e);
	void set_secretary(Employee *e);
	void print() const;

private:
	string name;
	Employee *receptionist;
	Employee *secretary;
};
#endif