#include "Department.h"
#include <iostream>	//need for cout

Department::Department()
{
	receptionist = NULL;
	secretary = NULL;
}
Department::Department(string n)
{
	name = n;
	receptionist = NULL;
	secretary = NULL;
}
void Department::set_receptionist(Employee *e)
{
	receptionist = e;
}
void Department::set_secretary(Employee *e)
{
	secretary = e;
}
void Department::print() const
{
	cout << "Name: " << name
		<< "\nReceptionist: ";
	if (receptionist == NULL)
		cout << "None";
	else
		cout << receptionist->get_name() << " "
		<< receptionist->get_salary();

	cout << "\nSecretary: ";
	if (secretary == NULL)
		cout << "None" << endl;
	else if (secretary == receptionist)
		cout << "Same ";
	else
		cout << secretary->get_name() << " "
		<< secretary->get_salary();
	cout << "\n\n";
}