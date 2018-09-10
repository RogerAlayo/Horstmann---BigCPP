#ifndef UTIL_H
#define UTIL_H

#include <vector>

template<typename Item>
void swap(Item& x, Item& y);

template<typename Item>
void print(std::vector<Item> a);

template<typename Item>
void rand_seed();

template<typename Item>
Item rand_int(Item a, Item b);

#endif