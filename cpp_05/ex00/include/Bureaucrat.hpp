#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		const std::string _name = "Bureaucrat";
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat(int grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();

		bool GradeTooHighException();
		bool GradeTooLowException();

		std::string getName();
		int			getGrade();

		int	incrementGrade();
		int decrementGrade();
};

std::ofstream& operator<<(std::ofstream& out, Bureaucrat& bureaucrat);

#endif