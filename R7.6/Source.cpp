#include <iostream>

using namespace std;

int main()
{
	int *p = new int;	//always initialize pointers, if not, then will cause error (NULL won't work - why??)
	*p = 5;

	double *q = new double;
	*q = 5.0;

	cout << "Address of p: " << (unsigned long)(p) << endl;
	cout << "Value of p: " << *p << endl << endl;

	cout << "Address of p + 1: " << (unsigned long)(p + 1) << endl;
	cout << "Value of p + 1: " << *(p + 1) << endl << endl;

	cout << "Address of q: " << (unsigned long)(q) << endl;
	cout << "Value of q: " << *q << endl << endl;

	cout << "Address of q + 1: " << (unsigned long)(q + 1) << endl;
	cout << "Value of q + 1: " << *(q + 1) << endl;

	system("PAUSE");
	return 0;
}

/*
int main()
{
int *p = NULL;	//NULL won't work - why??
*p = 5;

cout << "Address of p: " << (unsigned long)(p) << endl;
cout << "Value of p: " << *p << endl << endl;

cout << "Address of p + 1:" << (unsigned long)(p + 1) << endl;
cout << "Value of p + 1 " << *(p+1) << endl;

system("PAUSE");
return 0;
}
*/