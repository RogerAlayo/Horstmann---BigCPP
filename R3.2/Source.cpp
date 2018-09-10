#include "../../std_lib_facilities.h"
using namespace std;

int main()
{
	//These are the precision limits for each type:
	int n = 10;
	float x = 10.0000001; //if u take out one 0 test below will fail
	double d = 10.0000000000000001; //if u take out one 0 test below will fail

	//Test precision of FLOAT vs DOUBLE vs INT
	if (n == 10) cout << "int" << endl;
	else cout << "not int" << endl;
	
	if (x == 10) cout << "float" << endl;
	else cout << "not float" << endl;

	if (d == 10) cout << "double" << endl;
	else cout << "not double" << endl;

	system("pause");
	return 0;
}
/*NOTES ON ROUND-OFF ERROR WITH FLOATING-PT #'S*/
/*When comparing a floating-point #
there arises a problem in the field of precision

Precision is a field which determines the # of meaningful
digits to be displayed on both sides of the decimal point

It means that when there is a series of zeroes after the
decimal point, it is not possible for the compiler to decide,
up to which digit the checking is to be done.

Ex: If the value of floating point # = 10.00000000000000001,
then the comparison to value 10 returns to be true which
is incorrect, this is cuz it exceeds the precision limit
of a floating pt #

Whereas, if the floating-pt # = 10.001, then the comparison
to value 10 returns to be false, which is completely correct,
cuz it does not exceed the precision limit of a floating-pt #
*/