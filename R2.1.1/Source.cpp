#include"../../std_lib_facilities.h"
using namespace std;

int main()
{
	double s=0 , s0=0 , v0=0 , t=0 , g=0;

	s = s0 + v0*t + g*t*t / 2;	//Note: g*t*t/2 follows PEMDAS so more readable than (g*t^2)/2 

	cout << s << endl;

	system("pause");
	return 0;
}