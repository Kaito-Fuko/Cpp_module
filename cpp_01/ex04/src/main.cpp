#include <iostream>
#include <fstream>

int cerror(char *str, std::string name, char *end)
{
	std::cerr << str << name << end << std::endl;
	return 1;
}

void	replaceFile(std::ifstream &infile, std::ofstream &outfile, std::string s1,std::string s2)
{
	std::cout << "bonjour" << std::endl;
	std::cout << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (cerror("error: wrong numbers of arguments", NULL, NULL));

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (s1.empty())
		return cerror("error: s1 is empty", NULL, NULL);
	
	std::ifstream	infile(filename);
	if (!infile)
		return cerror("error: ", filename, " is invalid");

	std::ofstream	outfile(filename + ".replace");
	if (!outfile)
		return cerror("error: ", filename, ".replace not created");
	
	replaceFile(infile, outfile, s1, s2);
	
	infile.close();
	outfile.close();
	std::cout << filename << ".replace created successfully" << std::endl;
	return 0;
}