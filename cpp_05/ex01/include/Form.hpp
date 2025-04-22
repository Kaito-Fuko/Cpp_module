#ifndef Form_HPP
# define Form_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool	_sign;
		const int	_grade_sign;
		const int	_grade_exec;

	public:
		Form();
		Form(std::string name, int grade_sign, int grade_exec);
		Form(const Form& other);
		~Form();

		Form& operator=(const Form& other);

		const std::string getName();
		bool	getSign();
		int getGradeSign();
		int getGradeExec();

		// std::exception GradeTooHighException();
		// std::exception GradeTooLowException();
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class FormNotSigned : public std::exception
		{
			public:
				const char* what() const throw();
		};

		void	beSigned(Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& out, Form& Form);

#endif