#include "../include/replace.hpp"

Replace::Replace(std::string file, std::string _s1, std::string _s2): filename(file), s1(_s1), s2(_s2)
{}

Replace::~Replace()
{}

int	Replace::replaceFile()
{
	if (s1.empty() || s2.empty())
	{
		std::cout << "error: s1 or s2 is empty";
		return 1;
	}
	
	std::ifstream	infile(filename.c_str());
	if (!infile)
	{
		std::cout << "error: " << filename << " is invalid" << std::endl;
		return 1;
	}
	
	if (infile.peek() == EOF) 
    {
        std::cerr << "Error: The file " << filename << " is empty." << std::endl;
        return 1;
    }

	std::ofstream	outfile((filename + ".replace").c_str());
	if (!outfile)
	{
		std::cout << "error: " << filename << ".replace not created" << std::endl;
		infile.close();
		return 1;
	}
	
	std::string line;

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
	infile.close();
	outfile.close();
	return 0;
}