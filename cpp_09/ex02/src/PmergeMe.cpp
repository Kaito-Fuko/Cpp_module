#include "PmergeMe.hpp"

void PmergeMe::mergeSort(std::vector<int> array)
{
	int size = array.size();
	if (size < 2)
		return ;

	int mid = size / 2;
	std::vector<int> leftArray = new std::vector<int>[mid];
}