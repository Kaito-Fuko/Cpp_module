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

		void mergeSort(int array[]);
		void merge(int leftArray[], int rithgArray[], int array[]);
		void mergeSort(std::vector<int> array);
		void merge(std::vector<int> leftArray, std::vector<int> rithgArray);
		void mergeSort(std::deque<int> array);
		void merge(std::deque<int> leftArray, std::deque<int> rithgArray);
};

#endif