#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
	Car();
	Car(double efficiency);
	void add_gas(double gas);
	void drive(double distance);
	double get_gas() const;

private:
	double gas_level;
	double gas_efficiency;
};

Car::Car()
{
	gas_level = 0.0;
	gas_efficiency = 0.0;
}

Car::Car(double efficiency)		//gas level has to be initialized here as well.
{								//Q: WHY ISN'T IT ENOUGH TO JUST INITIALIZE GAS IN DEFAULT CONSTRUCTOR, WHY DO I HAVE TO DO IT HERE TOO??
	gas_efficiency = efficiency;
	gas_level = 0.0;
}

void Car::add_gas(double gas)
{
	gas_level += gas;
}

void Car::drive(double distance)
{
	double gas_used = 0;
	gas_used = distance / gas_efficiency;
	gas_level -= gas_used;
}

double Car::get_gas() const
{
	return gas_level;
}

int main()
{
	Car my_beemer(29);
	my_beemer.add_gas(20);
	my_beemer.drive(100);
	cout << my_beemer.get_gas() << endl;

	system("pause");
	return 0;
}