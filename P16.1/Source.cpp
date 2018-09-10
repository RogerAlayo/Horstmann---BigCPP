#include <iostream>
#include "util.h"

template<typename Item>
Item min_position(std::vector<Item>& a, Item from, Item to)
{
	int min_pos = from;
	int i;
	for (i = from + 1; i <= to; ++i)
		if (a[i] < a[min_pos]) min_pos = i;
	return min_pos;
}

template<typename Item>
void selection_sort(std::vector<Item>& a)
{
	int next;

	for (next = 0; next < a.size() - 1; ++next)
	{
		int min_pos = min_position(a, next, a.size() - 1);
		if (min_pos != next)
			swap(a[min_pos], a[next]);
	}
}

int main()
{
	//rand_seed();
	std::vector<int>v(20);

	for (int i = 0; i < v.size(); ++i)
		v[i] = rand_int(1, 100);

	print(v);
	selection_sort(v);
	print(v);
	return 0;
}