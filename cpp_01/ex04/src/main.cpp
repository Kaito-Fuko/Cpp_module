#include "../include/replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "error: wrong numbers of arguments. you need <filename>, <s1>, <s2>." << std::endl;
		return (1);
	}

	Replace file(av[1], av[2], av[3]);

	if (file.replaceFile())
		return (1);

	std::cout << av[1] << ".replace created successfully" << std::endl;

	return 0;
}