#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public Form
{
	private:
	    std::string _target;

	public:
	    RobotomyRequestForm();
	    RobotomyRequestForm(const std::string& target);
	    RobotomyRequestForm(const RobotomyRequestForm& other);
	    ~RobotomyRequestForm();

	    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

		void	execute(Bureaucrat const& executor) const;
};

#endif
