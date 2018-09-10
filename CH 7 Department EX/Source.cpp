#include <iostream>
#include "Department.h"

using namespace std;

int main()
{
	Department Shipping("Shipping");
	Department PACT("PACT");

	Employee *Harry = new Employee("Hacker, Harry", 70000);
	Shipping.set_secretary(Harry);

	Employee *Agnes = new Employee("Basler, Agnes", 80000);
	PACT.set_receptionist(Agnes);
	PACT.set_secretary(Agnes);

	Agnes->set_salary(100000);

	Shipping.print();
	PACT.print();

	delete Harry;
	delete Agnes;

	system("PAUSE");
	return 0;
}