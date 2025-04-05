#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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

		std::string GradeTooHighException();
		std::string GradeTooLowException();

		std::string getName();
		int			getGrade();

		void	incrementGrade();
		void 	decrementGrade();
};

std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat);

#endif