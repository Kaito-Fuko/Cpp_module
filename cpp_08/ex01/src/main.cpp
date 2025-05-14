#include "../include/Span.hpp"

void	printSpan(std::vector<int>* tmp)
{
	std::vector<int>::const_iterator i;
	for (i = tmp->begin(); i != tmp->end(); i++)
		std::cout << *tmp << std::endl;
}

int main()
{
	Span test(6);

	test.addNumber(8);
	printSpan(test._tab);
}