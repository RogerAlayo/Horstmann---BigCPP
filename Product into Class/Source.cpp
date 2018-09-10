#include <iostream>
#include <string>

using namespace std;

class Product
{
public:
	Product();
	void read();
	bool is_better_than(Product b) const;
	void print() const;
private:
	string name;
	double price;
	int score;		
};

Product::Product()
{
	price = 1;
	score = 0;
}

void Product::read()
{
	cout << "Enter name of model: " << endl;
	getline(cin, name);
	cout << "Enter price: " << endl;
	cin >> price;
	cout << "Enter score: " << endl;
	cin >> score;
	string remainder;	//declaring local variable
	getline(cin, remainder);
}

bool Product::is_better_than(Product b) const
{
	if (price == 0) return true;
	if (b.price == 0) return false;

	double value1;
	double value2;

	value1 = score / price;
	value2 = b.score / b.price;

	return value1 > value2;
}

void Product::print() const
{
	cout << name << endl;
	cout << "Price: " << price << endl;
	cout << "Score: " << score << endl;
}

int main()
{
	Product best;
	Product next;
	string answer;

	bool more = true;
	while (more)
	{
		next.read();
		if (next.is_better_than(best))
			best = next;

		cout << "\nDo you want to keep entering more data? (y/n)" << endl;
		getline(cin, answer);

		if (answer != "y")
		{
			more = false;
		}
	}

	cout << "\nThe best value is: ";
	best.print();

	system("pause");
	return 0;
}