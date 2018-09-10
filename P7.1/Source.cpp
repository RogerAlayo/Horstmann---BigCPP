#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	const size_t MAX_SIZE = 3;
	Person* people = new Person[MAX_SIZE];
	



	system("PAUSE");
	return 0;
}
/*
	//set array instead of this way...cout to put in max?
	bool more = true;
	while (more)
	{
		string name;
		string bf;
		string answer; 
		string cont;

		cout << "Name: " << endl;
		cin >> name;
		Person a(name);

		cout << "Does " << name << " have a best friend?" << endl;
		cin >> answer;

		if (answer == "yes" || answer == "y")
		{
			cout << "what is thier name: " << endl;
			cin >> bf;
			a.set_bestfriend(bf);
		}

		cout << "Do you want to continue" << endl;
		cin >> cont;
		if (cont == "yes" || cont == "y")
			more = true;
		else
			more = false;
	}


	*/
	