#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include <string>
# include <iostream>
# include <fstream>

class PresidentialPardonForm : public Form
{
	private:
	    std::string _target;

	public:
	    PresidentialPardonForm();
	    PresidentialPardonForm(const std::string& target);
	    PresidentialPardonForm(const PresidentialPardonForm& other);
	    ~PresidentialPardonForm();

	    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

		void	execute(Bureaucrat const& executor) const;
};

#endif
