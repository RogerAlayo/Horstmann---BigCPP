#include <iostream>
#include "ccc_empl.h" // In windows, the header file name
						//is not case-sensitive but 
						//for other operating sytsems it is:
						//so practice by always making sure
						//all name titles of .h files are capital or not
using namespace std;

int main() 
{
	Employee harry("Hacker, Harry", 45000.00);

	double new_salary = harry.get_salary() + 3000;
	harry.set_salary(new_salary);

	cout << "Name: " << harry.get_name() << "\n";
	cout << "Salary: " << harry.get_salary() << "\n";

	system("pause");
	return 0;
}