#include <iostream>
#include <string>

using namespace std;

class Product
{
public:
	Product();
	Product(string, double, int);
	//void read();
	//bool is_better_than(Product b) const;
	void print() const;
	double getPrice() const;
	int getScore() const;
	string getName() const;

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
Product::Product(string newName, double newPrice, int newScore)
{
	name = newName;
	price = newPrice;
	score = newScore;
}
/*
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

return score / price > b.score / b.price;
}
*/
void Product::print() const
{
	cout << name << endl;
	cout << "Price: " << price << endl;
	cout << "Score: " << score << endl;
}

double Product::getPrice() const
{
	return price;
}

int Product::getScore() const
{
	return score;
}

string Product::getName() const
{
	return name;
}

Product read();	//type Product
bool is_better_than(Product n, Product b);	//prototype

int main()
{
	Product best;
	Product next;
	string answer;

	bool more = true;

	while (more)
	{
		next = read();

		if (is_better_than(next, best))		//FN CALL inside if statement
			best = next;

		/*if (next.is_better_than(best))
		best = next;
		*/

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

bool is_better_than(Product n, Product b)
{
	if (n.getPrice() == 0) return true;
	if (b.getPrice() == 0) return false;

	return n.getScore() / n.getPrice() > b.getScore() / b.getPrice();
}

Product read()	//not taking in any new parameters so define variable inside definition
{
	string newName;
	double newPrice;
	int newScore;

	cout << "Enter name of model: " << endl;
	getline(cin, newName);
	cout << "Enter price: " << endl;
	cin >> newPrice;
	cout << "Enter score: " << endl;
	cin >> newScore;
	string remainder;	//declaring local variable
	getline(cin, remainder);

	Product next(newName, newPrice, newScore); //why this line? //does it make it not reusable
	
	return next;
}