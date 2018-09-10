#include <iostream>
#include <vector>

using namespace std;

int main()
{	
	//a.vector: needs all elements to be #'s 1-10 and then output results
	vector <int> v(11);	//the max element # is 10
						//but size() returns 11 which is what we initialized it to
	int n = 1;
	int i;

	for (i = 0; i <v.size() - 1; i++)
	{
		v[i] = n;
		n++;
		//cout << v[i] << endl;	//will show us the value for each element since its inside loop
	}
	cout << v[i] << endl;	//Note:	LOOPS have what I call, loop variable remainders, cuz of i++
							//Ex: v.size() = 11 but ONLY has 10 element positions in vector
							//even tho (i=10) < (v.size()=11), if I put cout << v[i];, 
							//it will be a bound error
							//cuz loop ends at i = 10 but will still go thru one last iteration of i++ 
							//so will update 10 to 11
							//Therefore, need to make test: i < v.size()-1 so last iteration will make i=10
							//cout << n << endl;	//n = 11 but doesn't get put into array cuz test failed so v[10] is empty

//NOTE:: if I never used i outisde loop & instead just indexed the last element
	//then v.size() would work fine and I would make the size 10 instead of 11
	//Ex:

	vector <int> v(10);
	int n = 1;
	int i;

	for (i = 0; i <v.size(); i++)
	{
		v[i] = n;
		n++;
	}
	cout << v[9] << endl;
	//but cout << v[i] will give bounds error since loop remainder will turn i = 10 which position DNE 

//ALSO NOTE: i would also work with just v.size if i was inside loop

	vector <int> v(10);
	int n = 1;
	int i;

	for (i = 0; i <v.size(); i++)
	{
		v[i] = n;
		n++;
		cout << v[i] << endl;
	}


//NOTE: This is a shortcut, smarter way
		const int MAX = 11;	//max_size

		vector <int> v(MAX);

		for (int i = 1; i < v.size(); i++)
		{
			v[i] = i;
			cout << v[i];
		}
		cout << endl;

		system("pause");
		return 0;
	}
