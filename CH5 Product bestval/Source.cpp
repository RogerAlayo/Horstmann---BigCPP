#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string best_name;
	double best_price = 1;
	int best_score = 0;
	double best_value = 0;

	string next_name;
	double next_price = 0;
	int next_score = 0;
	double next_value = 0;

	string remainder;
	string answer;
	bool more = true;

	while (more)
	{
		cout << "Enter name of model: " << endl;
		getline (cin, next_name);
		cout << "Enter price: " << endl;
		cin >> next_price;
		cout << "Enter score: " << endl;
		cin >> next_score;
		getline(cin, remainder);

		next_value = next_score / next_price;
		best_value = best_score / best_price;
		
		if (next_value > best_value)
		{
			best_name = next_name;
			best_price = next_price;
			best_score = next_score;
		}
	
		cout << "\nDo you want to keep entering more data? (y/n)" << endl;
		getline(cin, answer);
		
		if (answer != "y")
		{
			more = false;
		}
		cout << '\n' << endl;
	}

	cout << "\nThe best value is: " << best_name << endl;
	cout << "Price: " << best_price << endl;
	cout << "Score: " << best_score << endl;

	system("pause");
	return 0;
}