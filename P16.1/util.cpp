#include <iostream>
#include <cstdlib>
#include <ctime>

#include "util.h"

template<typename Item>
void swap(Item& x, Item& y)
{
	Item temp = x;
	x = y;
	y = temp;
}

template<typename Item>
void print(std::vector<Item> a)
{
	for (size_t i = 0; i < a.size(); ++i)
	{
		std::cout << a[i] << " ";
	}

	std::cout << "\n";
}

template<typename Item>
void rand_seed()
{
	int seed = static_cast<int>(time(0));
	srand(seed);
}

template<typename Item>
Item rand_int(Item a, Item b) 
{
	return a + rand() % (b - a + 1);
}