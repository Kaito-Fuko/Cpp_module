#ifndef AForm_HPP
# define AForm_HPP

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
		virtual ~Form();

		Form& operator=(const Form& other);

		const std::string getName();
		bool	getSign() const;
		int getGradeSign() const;
		int getGradeExec() const;

		std::string GradeTooHighException();
		std::string GradeTooLowException();
		void	beSigned(Bureaucrat& bureaucrat);
		virtual void	execute(Bureaucrat const& executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, Form& Form);

#endif