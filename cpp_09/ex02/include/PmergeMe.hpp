#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# define RED "\033[0;38;5;196m"
# define BOLD "\033[1m"
# define END "\033[0m"

# include <iostream>
# include <vector>
# include <deque>

class PmergeMe
{
	private:
		std::vector<int> vec;
		std::deque<int> dec;

	public:
		PmergeMe();
		PmergeMe(int ac, char** av);
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();
};

#endif