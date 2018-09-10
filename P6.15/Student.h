#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
public:
	Student();
	Student(string, int);
	const static size_t MAX = 5;
	string get_name() const;
	string get_DOB() const;


private:
	string name;
	string DOB;
};

#endif
