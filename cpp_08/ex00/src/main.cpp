#include "../include/easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	int i[] = {1, 2, 3, 4, 5};
	std::vector<int> vec(i, i + 5);

	int j[] = {10, 20, 30, 40};
	std::list<int> lst(j, j + 4);

	try
	{
		std::vector<int>::const_iterator it = easyfind(vec, 3);
		std::cout << "find : " << *it << "." << std::endl;
		{
			std::vector<int>::const_iterator it = easyfind(vec, 8);
			std::cout << "find : " << *it << "." << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
        std::list<int>::const_iterator it = easyfind(lst, 20);
        std::cout << "find : " << *it << "." << std::endl;
    }
	catch (const std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }
}
