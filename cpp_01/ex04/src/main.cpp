#include <iostream>
#include <fstream>

int cerror(std::string str, std::string name, std::string end)
{
	std::cerr << str << name << end << std::endl;
	return 1;
}

void	replaceFile(std::ifstream &infile, std::ofstream &outfile, std::string s1,std::string s2)
{
	std::string	line;
	
	while (std::getline(infile, line))
	{
        size_t pos = 0;
	
		pos = line.find(s1, pos);
        while (pos != std::string::npos)
        {
            std::string before = line.substr(0, pos);
            std::string after = line.substr(pos + s1.length());
            line = before + s2 + after;
            pos = line.find(s1, pos + s2.length());
        }
		outfile << line << std::endl;
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "error: wrong numbers of arguments" << std::endl;
		return (1);
	}

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (s1.empty())
		return cerror("error: s1 is empty", NULL, NULL);
	
	std::ifstream	infile(filename.c_str());
	if (!infile)
		return cerror("error: ", filename, " is invalid");

	std::ofstream	outfile((filename + ".replace").c_str());
	if (!outfile)
		return cerror("error: ", filename, ".replace not created");
	
	replaceFile(infile, outfile, s1, s2);
	
	infile.close();
	outfile.close();
	std::cout << filename << ".replace created successfully" << std::endl;
	return 0;
}