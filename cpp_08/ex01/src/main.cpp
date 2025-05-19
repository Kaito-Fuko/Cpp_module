#include "../include/Span.hpp"
#include <cstdlib>
#include <ctime>

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
	
	// {
	// 	const unsigned int size = 10000;
    // 	Span sp(size);

 	// 	std::srand(std::time(NULL)); // Initialisation du générateur aléatoire

    // // Ajout de 10 000 nombres aléatoires
    // 	for (unsigned int i = 0; i < size; ++i)
	// 	{
    //     	int randomValue = std::rand(); // Génère un entier aléatoire
    //     	sp.addNumber(randomValue);
    // 	}
	// 	sp.printSpan();
    // 	try
	// 	{
    // 	    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    // 	    std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    // 	}
	// 	catch (const std::exception& e)
	// 	{
    // 	    std::cerr << "Erreur: " << e.what() << std::endl;
    // 	}
	// }

	{
		std::vector<int> myNumbers(10000);

		for (size_t i = 0; i < myNumbers.size(); ++i)
    		myNumbers[i] = std::rand();

		Span sp(10000);
		sp.addMultiNumber(myNumbers.begin(), myNumbers.end());
		try
		{
    	    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    	    std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    	}
		catch (const std::exception& e)
		{
    	    std::cerr << "Erreur: " << e.what() << std::endl;
    	}
	}

	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	
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

	return 0;
}