#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AFrom.hpp"
# include <string>
# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public From
{
	private:
	    std::string _target;

	public:
	    ShrubberyCreationForm();
	    ShrubberyCreationForm(const std::string& target);
	    ShrubberyCreationForm(const ShrubberyCreationForm& other);
	    ~ShrubberyCreationForm();

	    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

	    void execute(Bureaucrat& executor);
};

#endif
