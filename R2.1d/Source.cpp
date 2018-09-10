#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
	double c = 0, a = 10, b = 10, y = 45;

	c = sqrt(pow(a,2) + pow(b,2) - 2 *a *b * cos(y));

	cout << c << endl;

	system("pause");
	return 0;
}