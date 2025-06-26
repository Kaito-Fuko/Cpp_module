#include "../include/PmergeMe.hpp"

// ---------------Constructeur(defaut)--------------- //
PmergeMe::PmergeMe()
{}

// -------------------Constructeur------------------- //
PmergeMe::PmergeMe(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		std::istringstream iss(av[i]);
		int num;
		if (!(iss >> num) || num < 0)
			throw std::logic_error("Error: Wrong input (invalid number).");
		vec.push_back(num);
		deq.push_back(num);
	}
}

// ----------------Constructeur(copy)---------------- //
PmergeMe::PmergeMe(const PmergeMe& other) 
{
	*this = other;
}

// ------------Constructeur (assignement)------------ //
PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
		*this = other;
	return *this;
}

// -------------------Destructeur-------------------- //
PmergeMe::~PmergeMe()
{}

// --------------------Print(V\D)-------------------- //
void	PmergeMe::printV() const
{
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << " " << vec[i];
	std::cout << "." << std::endl;
}

void	PmergeMe::printD() const
{
	for (size_t i = 0; i < deq.size(); i++)
		std::cout << " " << deq[i];
	std::cout << "." << std::endl;
}

// -----------------------Algo----------------------- //
// ----------------------Timeur---------------------- //
void	PmergeMe::timer()
{
	// const int iterations = 1000;
	// std::clock_t start, end;

	std::cout << "Before:";
	printV();

	std::vector<int>::iterator it = vec.begin();
	for (; it != vec.end(); it++)
	{
		std::cout << *it << std::endl;
		if (it + 1 != vec.end() && *it > (*it + 1))
			break;

	}
	std::cout << *it << std::endl;
	if (it == this->vec.end())
	{
		std::cout << "After: ";
		printV();
		std::cout << "No time because this array is already sorted" << std::endl;
		return ;
	}
	
	std::cout << "After:  ";
	printV();
}
