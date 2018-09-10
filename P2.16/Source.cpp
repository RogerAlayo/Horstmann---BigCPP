#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
	int digits1 = 0;
	int digits2 = 0;
	int length = 0;
	string difference;
	string hours;
	string minutes;
	

	cout << "Please enter the first time: " << endl;
	cin >> digits1;

	cout << "Please enter the second time: " << endl;
	cin >> digits2;

	difference = digits1 - digits2;
	length = difference.length();

	hours = difference.substr(-1,length-3);
	//minutes = difference.substr();




	cout <<  hours  << " hours and ";// << " minutes" << endl;


	system("pause");
	return 0;
}