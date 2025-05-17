#include "../include/Span.hpp"

void	Span::printSpan()
{
	std::vector<int>::const_iterator i;
	std::cout << "|-----------------------------------|\n|";
	for (i = _tab.begin(); i != _tab.end(); i++)
		std::cout << " " << *i << " |";
	std::cout << "\n|-----------------------------------|" << std::endl;
}

int main()
{
	
	try
	{
		Span test(6);
		test.addNumber(8);
		// test.longestSpan();
		test.addNumber(4);
		std::cout << std::endl;
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
		test.addNumber(8);
		test.addNumber(2);
		std::cout << std::endl;
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
		std::cout << std::endl;
		test.addNumber(8);
		test.addNumber(0);
		test.printSpan();
		test.addNumber(5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}