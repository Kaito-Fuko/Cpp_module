#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# define RED "\033[0;38;5;196m"
# define BOLD "\033[1m"
# define END "\033[0m"

# include <iostream>
# include <iomanip>
# include <vector>
# include <deque>
# include <sstream>
# include <ctime>
# include <algorithm>

class PmergeMe
{
	private:
		std::vector<int> vec;
		std::deque<int> deq;

		void fordJohnsonV(std::vector<int> &vec);
		void fordJohnsonD(std::deque<int> &deq);

	public:
		PmergeMe();
		PmergeMe(int ac, char** av);
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();

		bool parseArgs(int ac, char **av);
		void timer();
		void printV() const;
		void printD() const;
};

#endif