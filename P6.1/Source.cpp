#include <iostream>
using namespace std;

double scalar_product( double [], double [], int, double[]);

int main()
{
	const int MAX = 3;
	double a[MAX] = { 0 };
	int sizea = 0;
	double b[MAX] = { 0 };
	int sizeb = 0;
	double result[MAX] = { 0 };
	double sproduct = 0;

	bool more = true;

	while (more)
	{
		cout << "Enter values for a: " << endl;
		for (int i = 0; i < MAX; i++)
		{
			cin >> a[i];
		}

		cout << "Enter values for b: " << endl;
		for (int i = 0; i < MAX; i++)
		{
			cin >> b[i];
		}

		more = false;
	}
	
	sproduct = scalar_product(a, b, MAX, result);

	for (int i = 0; i < MAX; i++)
	{
		cout << "Array a = " << a[i] << " " << "Array b = " << b[i] << endl;
		cout << result[i] << endl;
	}

	cout << "Scalar product " << sproduct << endl;

	char endProg;
	cout << "\n\nEnd of Program" << endl;
	cin >> endProg;
	return 0;
}

double scalar_product( double arraya[], double arrayb[], int MAX, double r[])
{
	double product = 0;		//Note: do not put this & return product; in for loop below, 
							//if so, then loop will only iterate once and return result for 1 iteration
	for (int i = 0; i < MAX; i++)	//Becareful to only put in variable that you want to continuously loop and won't stop loop like return product;
	{
		r[i] = arraya[i] * arrayb[i];
		product = product + r[i];
	}
	return product;
}
