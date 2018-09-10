#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	string convfrom;
	string convto;
	string type;
	float value = 0;
	float result = 0;

	cout << "Please choose the type of conversion: \n"
		<< "Volume, Mass, or Length" << endl;
	cin >> type;

	if (type == "Volume" || type == "V" ||
		type == "Vol" || type == "volume" ||
		type == "v" || type == "vol")
	{
		cout << "Convert from (floz or gal):" << endl;
		cin >> convfrom;

		cout << "Convert to (ml or l): " << endl;
		cin >> convto;

		cout << "Enter value: " << endl;
		cin >> value;

		//Conversion from fl oz to ml:
		if (convfrom == "floz" || convfrom == "fluidoz")
		{
			if (convto == "milliliters" || convto == "ml")
			{
				result = value * 29.586;
				cout << result << " ml\n" << endl;
				system("pause");
				return 0;
			}
			else
			{
				cout << "Please express units differently:\n"
					<< "Ex:\n"
					<< "From: fl oz\n"
					<< "To: ml" << endl;
				system("pause");
				return 0;
			}
		}

		//Conversion from fl oz to liters
		else if (convfrom == "floz" || convfrom == "fluidoz")
		{
			if (convto == "liters" || convto == "l")
			{
				result = value * .0295735;
				cout << result << " liters\n" << endl;
				system("pause");
				return 0;
			}

			else
			{
				cout << "Please express units differently:\n"
					<< "Ex:\n"
					<< "From: fl oz\n"
					<< "To: l" << endl;
				system("pause");
				return 0;
			}
		}	
		//Conversion from gallon to ml
		else if (convfrom == "gallons" || convfrom == "gal")
		{
			if (convto == "milliliters" || convto == "ml")
			{
				result = value * 3785.41;
				cout << result << " ml\n" << endl;
				system("pause");
				return 0;
			}
			
			else
			{
				cout << "Please express units differently:\n"
					<< "Ex:\n"
					<< "From: gal\n"
					<< "To: ml" << endl;
				system("pause");
				return 0;
			}
		}
		//Conversion from gallon to liters
		else if (convfrom == "gallons" || convfrom == "gal")
		{
			if (convto == "liters" || convto == "l")
			{
				result = value * 3.78541;
				cout << result << " liters\n" << endl;
				system("pause");
				return 0;
			}
			
			else
			{
				cout << "Please express units differently:\n"
					<< "Ex:\n"
					<< "From: gal\n"
					<< "To: l" << endl;
				system("pause");
				return 0;
			}
			
		}
	}
	else
	{
		cout << "Please re-enter the type of conversion you want";
		system("pause");
		return 0;
	}
////////////////////////////////////////////////////////////////////////////


	if (type == "Mass" || type == "M" ||
		type == "Mas" || type == "mass" ||
		type == "m" || type == "ma")
	{
		cout << "Convert from (oz or pounds):" << endl;
		cin >> convfrom;

		cout << "Convert to (grams): " << endl;
		cin >> convto;

		cout << "Enter value: " << endl;
		cin >> value;

		//Conversion from ounces to grams
		if (convfrom == "ounces" || convfrom == "oz")
		{
			if (convto == "grams" || convto == "g")
			{
				result = value * 28.35;
				cout << result << " g" << endl;
			}
		}
		else
		{
			cout << "Please express units differently:\n"
				<< "Ex:\n"
				<< "From: oz\n"
				<< "To: g" << endl;
		}

		//Conversion from pounds to grams
		if (convfrom == "pounds" || convfrom == "lbs")
		{
			if (convto == "grams" || convto == "g")
			{
				result = value * 453.592;
				cout << result << " g" << endl;
			}
		}
		else
		{
			cout << "Please express units differently:\n"
				<< "Ex:\n"
				<< "From: lbs\n"
				<< "To: g" << endl;
		}
	}
	else
	{
		cout << "Please re-enter the type of conversion you want";
	}
////////////////////////////////////////////////////////////////////////////////////


	if (type == "Length" || type == "L" ||
		type == "Len" || type == "length" ||
		type == "l" || type == "len")
	{
		cout << "Convert from (in, ft, or miles):" << endl;
		cin >> convfrom;

		cout << "Convert to (cm or km): " << endl;
		cin >> convto;

		cout << "Enter value: " << endl;
		cin >> value;

		//Conversion from inches to cm
		if (convfrom == "inches" || convfrom == "in")
		{
			if (convto == "centimeters" || convto == "cm")
			{
				result = value * 2.54;
				cout << result << " cm" << endl;
			}
		}
		else
		{
			cout << "Please express units differently:\n"
				<< "Ex:\n"
				<< "From: in\n"
				<< "To: cm" << endl;
		}

		//Conversion from inches to km
		if (convfrom == "inches" || convfrom == "in")
		{
			if (convto == "kilometers" || convto == "km")
			{
				result = value * 2.5E-5;
				cout << result << " km" << endl;
			}
		}
		else
		{
			cout << "Please express units differently:\n"
				<< "Ex:\n"
				<< "From: in\n"
				<< "To: km" << endl;
		}

		//Conversion from feet to cm
		if (convfrom == "feet" || convfrom == "ft")
		{
			if (convto == "centimeter" || convto == "cm")
			{
				result = value * 30.48;
				cout << result << " cm" << endl;
			}
		}
		else
		{
			cout << "Please express units differently:\n"
				<< "Ex:\n"
				<< "From: ft\n"
				<< "To: cm" << endl;
		}

		//Conversion from feet to km
		if (convfrom == "feet" || convfrom == "ft")
		{
			if (convto == "kilometer" || convto == "km")
			{
				result = value * 0.0003048;
				cout << result << " km" << endl;
			}
		}
		else
		{
			cout << "Please express units differently:\n"
				<< "Ex:\n"
				<< "From: ft\n"
				<< "To: km" << endl;
		}

		//Conversion from miles to cm
		if (convfrom == "miles" || convfrom == "mi")
		{
			if (convto == "centimeter" || convto == "cm")
			{
				result = value * 160934;
				cout << result << " cm" << endl;
			}
		}
		else
		{
			cout << "Please express units differently:\n"
				<< "Ex:\n"
				<< "From: mi\n"
				<< "To: cm" << endl;
		}

		//Conversion from miles to km
		if (convfrom == "miles" || convfrom == "mi")
		{
			if (convto == "kilometer" || convto == "km")
			{
				result = value * 1.609;
				cout << result << " km" << endl;
			}
		}
		else
		{
			cout << "Please express units differently:\n"
				<< "Ex:\n"
				<< "From: mi\n"
				<< "To: km" << endl;
		}
	}
	else
	{
		cout << "Please re-enter the type of conversion you want";
	}
	
	
	system("pause");
	return 0;
}




/*
char fluid_oz[2] = { 'f', 'l' };
char gallon[2] = { 'g', 'a' };
char oz[2] = { 'o', 'z' };
char poounds[2] = { 'p', 'o' };
char lbs[2] = { 'l', 'b' };
char inch[2] = { 'i', 'n' };
char foot[2] = { 'f', 't' };
char mile[2] = { 'm', 'i' };

cout << "Convert from: " << endl;
cin >> convfrom;

cout << "Conver to: " << endl;
cin >> convto;

cout << "Enter value: " << endl;
cin >> value;

if (isalpha(convfrom[0]))
{
if (islower(convfrom[0]))
{
convfrom[0] = toupper(convfrom[0]);
}
switch (convfrom[0])
{

}
}
*/