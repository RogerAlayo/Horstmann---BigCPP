#include <iostream>
#include <cstring>
#include <ctype.h>	//allows some C fns which is benefitial since C only does chars and not strings so has char fns

using namespace std;

int main()
{
	char card[3];	//does this initialize to 3 or set an array of 3 positions?
	int len = 0;
	
	cout << "Enter the shortcut notation: " << endl;
	cin >> card; 

	//checks if 1st character is a number or alphabet
	cout << "Details: " << endl;

	if (isalpha(card[0]))	//true if character in position 0 is an alphabet
	{
		if (islower(card[0]))	//true if character is lowercase in position 0
		{
			card[0] = toupper(card[0]);	//converts character in position 0 to uppercase and put it back in position 0
		}
			switch (card[0])	//so card[0] is treated as a variable?
			{
			case 'A':
				cout << "Ace of ";
				break;
			case 'J':
				cout << "Jack of ";
				break;
			case 'Q':
				cout << "Queen of ";
				break;
			case 'K':
				cout << "King of ";
				break;
			}
		
	}
	else if (isdigit(card[1]))	//true if character is a number in the second position
	{
		cout << "Ten of ";
	}
	else
	{
		cout << card[0] << " of ";	//display the character in position 0 (it will be a # since won't be an alphabet)
	}

	len = strlen(card);		//From C: strlen(charvariable) is for chars,
							//From C++: card.strlength() is for strings

	if (islower(card[len - 1]))
	{
		card[len - 1] = toupper(card[len - 1]);
	}
		switch (card[len-1])
		{
			case 'D':
				cout << "Diamonds" << endl;
				break;
			case 'H':
				cout << "Hearts" << endl;
				break;
			case 'S':
				cout << "Spades" << endl;
				break;
			case 'C':
				cout << "Clubs" << endl;
				break;
		}
	
	
	system("pause");
	return 0;
}