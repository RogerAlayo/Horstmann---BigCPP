#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265;

double sphere_volume(double a)
{
	double volume = 4 * PI * pow(a, 3) / 3;
	return volume;
}

double sphere_surface(double a)
{
	double area = 4 * PI * pow(a, 2);
	return area;
}

double cylinder_volume(double a, double b)
{
	double volume = PI * b * pow(a, 2);
	return volume;
}

double cylinder_surface(double a, double b)
{
	double area = (2 * PI * a * b) + (2 * PI * pow(a,2));
	return area;
}

double cone_volume(double a, double b)
{
	double volume = (PI * pow(a, 2) * b) / 3;
	return volume;
}

double cone_surface(double a, double b)
{
	double area = PI * a * (a + (sqrt(pow(b,2) + pow(a,2))));
	return area;
}

int main()
{
	double r = 0;
	double h = 0;
	double sv = 0;
	double ss = 0;
	double cv = 0;
	double cs = 0;
	double cov = 0;
	double cos = 0;

	cout << "Enter a radius: " << endl;
	cin >> r;

	cout << "Enter a height: " << endl;
	cin >> h;

	sv = sphere_volume( r);
	ss = sphere_surface(r);
	cv = cylinder_volume(r, h);
	cs = cylinder_surface(r, h);
	cov = cone_volume(r, h);
	cos = cone_surface(r, h);

	cout << "Sphere Volume: " << sv << endl;
	cout << "Sphere Surface Area: " << ss << endl;
	cout << "Cylinder Volume: " << cv << endl;
	cout << "Cylinder Surface Area: " << cs << endl;
	cout << "Cone Volume: " << cov << endl;
	cout << "Cone Surface Area: " << cos << endl;
	
	system("pause");
	return 0;

}