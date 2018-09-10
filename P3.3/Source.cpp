#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main()
{
	float x = 0;
	float y = 0;
	float z = 0;
	float max1 = 0;
	float max2 = 0;

	cout << "Please enter 3 numbers: " << endl;
	cin >> x >> y >> z;

	max1 = (abs(x - y) + x + y) / 2;
	max2 = (abs(max1 - z) + max1 + z) / 2;

	cout << "The largest number is: " << max2 << endl;

	system("pause");
	return 0;
}