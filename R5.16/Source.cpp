#include <iostream>
#include <string>

using namespace std;

class Product
{
public:
	Product();
	void read();
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
/*
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

bool is_better_than(Product n, Product b);	//prototype

int main()
{
	Product best;
	Product next;
	string answer;

	bool more = true;

	while (more)
	{
		next.read();

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
