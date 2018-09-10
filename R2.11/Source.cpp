#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
	double num1= 0;
	double num2 = 0;
	double result = 0;
	double frac = 0;
	int first_num = 0;
	int last_num = 0;
			
	first_num = 23456 % 10;
	num1 = log10(23456);
	//I have to use modf because % only works w/ ints like 3%4
	//but above I did log10(23456) and % does not work with log10()
	//However, modf works w/ variables which I have one assigned w/ log10(23456)
	frac = modf(num1, &num2);	//don't forget the & in &num2 which holds the whole #
	
	result = pow(10, frac);
	last_num = result;	// converting double into intger to cut out fraction part

	cout << last_num << endl;
	cout << first_num << endl;

	//printf("%f = %f + %f \n", num1, num2, frac);	//this part prints the 3 variables 
													//in that certain order
	
	system("pause");
	return 0;
}