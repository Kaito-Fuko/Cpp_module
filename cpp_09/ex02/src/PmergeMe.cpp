#include "../include/PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

PmergeMe::PmergeMe(int ac, char **av)
{
	(void)ac;
	(void)av;
}

PmergeMe::PmergeMe(const PmergeMe& other) 
{
	*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
		*this = other;
	return *this;
}

PmergeMe::~PmergeMe()
{}
