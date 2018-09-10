#include <iostream>
#include <string>

using namespace std;

const double PI = 3.14;	//Note: you can still put const here

class Sodacan 
{
public:
	Sodacan();
	Sodacan(double height, double radius);
	double get_surface_area();
	double get_volume();

private:
	double h;	
	double r;
};

Sodacan::Sodacan()
{
	h = 0;
	r = 0;
}

Sodacan::Sodacan(double height, double radius)
{
	h = height;
	r = radius;
}

double Sodacan::get_surface_area()
{
	double area = 0;

	area = (2 * PI * r * h) + (2 * PI * pow(r, 2));

	return area;	//Don't forget to return something since return type is not void 
}

double Sodacan::get_volume()
{
	double volume = 0;

	volume = PI * pow(r, 2) * h;

	return volume;
}

int main()
{
	//Sodacan s(height, radius);	//Don't initialize object here cuz constructor states that r and h have to be numbers, 
									//if u put here u would be forced to put in random numbers to act as place holders
	//Sodacan a(0, 0);		//Don't do this either, it doesn't make sense & now u can't make ur inputs
								//the initializers for your object
	double radius = 0;
	double height = 0;

	cout << "This program will give you the area and volume of a sodacan: " << endl << endl;
	cout << "Please enter radius: " << endl;
	cin >> radius;
	cout << "Please enter height: " << endl;
	cin >> height;

	Sodacan s(height, radius);	//initialize object here so radius is now a # and height is also a #
									//NOTE:object variable names can be same names as constructor variable names
	cout << "Area: " << s.get_surface_area() << endl;	//NOTE: make sure to end with () for call to work
	cout << "Volume: " << s.get_volume()  << endl;


	system("pause");
	return 0;
}

