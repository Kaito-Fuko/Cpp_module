#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>

class Replace
{
	private:
		std::string filename;
		std::string s1;
		std::string s2;

	public:
		Replace(std::string file, std::string _s1, std::string _s2);
		~Replace();

		int	replaceFile();

};

#endif