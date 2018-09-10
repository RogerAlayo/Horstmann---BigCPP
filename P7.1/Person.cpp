#include "Person.h"

Person::Person()
{
	popularity = 0;
	bestfriend = NULL;
}

Person::Person(string n)
{
	name = n;
	popularity = 0;
	bestfriend = NULL;
}

void Person::set_bestfriend(Person bf)
{
	*bestfriend = bf;
	++popularity;
}

string Person::get_name() const
{
	return name;
}

int Person::get_popularity() const
{
	return popularity;
}

Person Person::get_besfriend() const
{
	return *bestfriend;
}

void Person::print() const
{
	cout << name << "'s best friend is " << bestfriend << ", popularity count: " << popularity << endl;
}