#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	Student();
	Student(string cname);	//Q: WHAT DOES "STRING IS AMBIGOUS" MEAN?
	string get_name();
	void add_quiz(int score);
	int get_total_score() const;
	double get_avg_score() const;

private:
	string name;
	int no_quiz;
	double total_quiz_score;
};

Student::Student()
{
	no_quiz = 0;
	total_quiz_score = 0.0;
}

Student::Student(string cname)
{
	name = cname;
	no_quiz = 0;
	total_quiz_score = 0.0;
}

string Student::get_name()
{
	return name;
}

void Student::add_quiz(int score)
{
	total_quiz_score += score;
	no_quiz++;
}

int Student::get_total_score() const
{
	return total_quiz_score;
}

double Student::get_avg_score() const
{
	double avg_score = 0;
	avg_score = total_quiz_score / no_quiz;
	return avg_score;
}

int main()
{
	bool more = true;
	string n;
	int q = 0;
	string a;

	cout << "Enter name of Student : " << endl;
	getline(cin, n);
	Student s(n);

	while (more)
	{
		cout << "What is the score of the quiz: " << endl;
		cin >> q;
		s.add_quiz(q);

		cout << "Are there any more quizzes: (y/n)" << endl;
		cin >> a;
		if (a == "y" || a == "Y" || a == "Yes" || a == "yes")
		{
			more = true;
		}
		else 
		{
			more = false;
		}
	}

	cout << "\nName of student: " << s.get_name() << endl;
	cout << "Total score of quizzes: " << s.get_total_score() << endl;
	cout << "Avg score of student: " << s.get_avg_score() << endl;

	system("pause");
	return 0;
}