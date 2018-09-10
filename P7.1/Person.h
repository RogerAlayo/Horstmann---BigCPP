#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using namespace std;

class Person
{
public:
	Person();
	Person(string n);

	void set_bestfriend(Person bf);

	string get_name() const;
	int get_popularity() const;
	Person get_besfriend() const;
	void print() const;

private:
	string name;
	int popularity;
	Person *bestfriend;
};
#endif
