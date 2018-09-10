#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
	const double PI = 3.14;
	double g=0, a=10, p=10, m1=1, m2=10;

	g = 4 * pow(PI, 2) * pow(a, 3) / pow(p, 2) * (m1 + m2);

	cout << g << endl;

	system("pause");
	return 0;
}