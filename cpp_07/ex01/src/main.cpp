#include "../include/iter.hpp"

template <typename T>
void printElement(T const &c)
{
	std::cout << c << std::endl;
}

int main()
{
	int tab[] = {1, 2, 3, 4, 5};
	std::string str[] = {"hello" , "world", "!"};
	iter(tab, 5, printElement);
	iter(str, 3, printElement);
}