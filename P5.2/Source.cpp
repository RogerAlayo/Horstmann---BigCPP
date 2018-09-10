#include <iostream>
#include <string>

using namespace std;

//Person Class
class Person
{
public:
	Person();
	Person(string pname, int page);
	string get_name() const;
	int get_age() const;
private:
	string name;
	int age;	//0 if unknown
};

Person::Person()
{
	age = 0;
}

Person::Person(string pname, int page)
{
	name = pname;
	age = page;
}

string Person::get_name() const
{
	return name;
}

int Person::get_age() const
{
	return age;
}
/////////////////////////////////////
//Employee Class

class PEmployee: Person
{
public:
	PEmployee();
	PEmployee(string employee_name, double initial_salary);
	void set_salary(double new_salary);
	double get_salary() const;
	string get_name() const;
private:
	double salary;
	Person person_data;
};

PEmployee::PEmployee()
{
	salary = 0;
	person_data = Person();
}

PEmployee::PEmployee(string employee_name, double initial_salary)
{
	salary = initial_salary;;
	person_data = Person(employee_name, 0);
}

void PEmployee::set_salary(double new_salary)
{
	salary = new_salary;
}

double PEmployee::get_salary() const
{
	return salary;
}

string PEmployee::get_name() const
{
	return person_data.get_name();	//.get name to go into Person class def
									//here the data field acts like object
}

int main()
{
	PEmployee A("Tom", 10000);
	
	cout << "Name of Emolpoyee" << A.get_name() << endl;
	cout << "Salary of Emolpoyee" << A.get_salary() << endl;
	cout << "Set new salary of Emolpoyee that is 20000" << endl;
	
	A.set_salary(20000);

	cout << "New Salary of employee: " << A.get_salary() << endl;

	system("pause");
	return 0;
}