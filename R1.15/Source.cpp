#include "../../std_lib_facilities.h"
#include "ccc_time.h"
using namespace std;

int main()
{
	Time alarm = Time(11, 0, 0);
	alarm.add_seconds(1000);
	
	cout << alarm.get_hours();

	Time now;

	int seconds_left = Time(23, 59, 59).seconds_from(now);

	cout << "Time " << seconds_left << endl;

	
	system("pause");
	return 0;
}
