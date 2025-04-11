#ifndef FROM_HPP
# define FROM_HPP

# include "Bureaucrat.hpp"

class From
{
	private:
		const std::string	_name;
		bool	_sign;
		const int	_grade_sign;
		const int	_grade_exec;

	public:
		From();
		From(std::string name, bool sign, int grade_sign, int grade_exec);
		From(const From& other);
		~From();

		From& operator=(const From& other);

		const std::string getName();
		bool	getSign();
		const int getGradeSign();
		const int getGradeExec();

		std::string GradeTooHighException();
		std::string GradeTooloxException();
};

std::ostream& operator<<(std::ostream& out, From& from);

#endif