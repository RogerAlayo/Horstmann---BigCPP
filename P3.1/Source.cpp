#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	float D = 0;
	float x1 = 0;
	float x2 = 0;

	cout << "Enter a: " << endl;
	cin >> a;

	cout << "Enter b: " << endl;
	cin >> b;

	cout << "Enter c: " << endl;
	cin >> c;

	D = pow(b, 2.0) - (4.0 * a * c);

	cout << D << endl;

	if (D < 0)
	{
		cout << "No solutions" << endl;
	}
	else if (D == 0)	//Always make sure this is == not = 
						//cuz if not u will assign D = 0 and coincidently
						//the next if statement will fail cuz not D is not > 0
	{
		x1 = -b / (2.0 * a);
		cout << "There is exactly one real number solution (with duplicity):" << " The solution is: " << x1 << endl;
	}
	else if (D > 0)
	{
		x1 = (-b + sqrt(D)) / (2.0 * a);
		x2 = (-b - sqrt(D)) / (2.0 * a);
		cout << "There are two solutions: " << x1 << " and " << x2 << endl;
	}
	else
		cout << "wrong iput" << endl;

	system("pause");
	return 0;
}
