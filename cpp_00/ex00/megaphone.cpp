#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			int j = -1;
			while (av[i][++j])
				av[i][j] = std::toupper(av[i][j]);
			std::cout << av[i];
			if (av[i] && av[i][j + 1] != ' ' && av[i][j] != ' ' && av[i][j - 1] != ' ' && av[i + 1])
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
	else 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
