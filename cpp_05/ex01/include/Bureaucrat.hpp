#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;


	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();

		Bureaucrat& operator=(const Bureaucrat& other);

		std::string GradeTooHighException();
		std::string GradeTooLowException();

		std::string getName();
		int			getGrade();

		void	incrementGrade();
		void 	decrementGrade();
		void	signForm(Form& Form);
};

std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat);

#endif