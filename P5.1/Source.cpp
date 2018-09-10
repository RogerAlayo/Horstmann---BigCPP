#include <iostream>
#include <string>

using namespace std;

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
	//age = 0;
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


int main()
{
	Person a;
	Person p("Roger", 26);

	cout << "Name: " << a.get_name() << endl;
	cout << "Age: " << a.get_age() << endl;

	cout << "Name: " << p.get_name() << endl;
	cout << "Age: " << p.get_age() << endl;

	system("pause");
	return 0;
}