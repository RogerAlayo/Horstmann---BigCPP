#include <iostream> 
#include "CCC_TIME.h"
using namespace std;

int main()
{
	//the time(7,0,0) object is stored in the Time variables
	Time wake_up(7, 0, 0); 
	wake_up.add_seconds(1000);
	cout << wake_up.get_hours() << ":"
		<< wake_up.get_minutes() << ":"
		<< wake_up.get_seconds() << endl;
	Time now;
	int seconds_left = Time(23,59, 59).seconds_from(now);

	system("pause");
	return 0;
}