#ifndef FROM_HPP
# define FROM_HPP

# include "Bureaucrat.hpp"

class From
{
	private:
		const std::string	_name;
		bool	_sign;
		int		_grade_sign;
		int		_grade_exec;

	public:
		From();
		From(std::string name, bool sign, int grade_sign, int grade_exec);
		From(const From& other);
		~From();
};

#endif