#include "Student.h"

Student::Student()
{
}

Student::Student(string n, int b)
{
	name = n;
	DOB = b;
}

string Student::get_name() const
{
	return name;
}

string Student::get_DOB() const
{
	return DOB;
}


