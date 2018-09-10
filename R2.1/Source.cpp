#include <iostream>

using namespace std;

int main()
{
	double fv = 0.0, pv = 10.0, INT= 10.0, yrs = 100.0;

	fv = pv * pow(1.0+INT/100.0, yrs);

	cout << fv << endl;

	return 0;
}