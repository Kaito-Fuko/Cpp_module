#include "../include/From.hpp"

From::From(): _name("Default"), _sign(0), _grade_sign(150), _grade_exec(150)
{}

From::From(std::string name, bool sign, int grade_sign, int grade_exec): _name(name), _sign(sign), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	if (grade_exec > 150)
		throw GradeTooLowException();
	else if (grade_exec < 1)
		throw GradeTooHighException();
	if (grade_sign > 150)
		throw GradeTooLowException();
	else if (grade_sign < 1)
		throw GradeTooHighException();
}

From::From(const From& other): _name(other._name), _sign(other._sign), _grade_sign(other._grade_sign), _grade_exec(other._grade_exec)
{}

From::~From()
{}

From& From::operator=(const From& other)
{
	if (this == &other)
		this->_sign = other._sign;
	return *this;
}

const std::string From::getName()
{
	return _name;
}

bool From::getSign()
{
	return _sign;
}

int From::getGradeSign()
{
	return _grade_sign;
}

int From::getGradeExec()
{
	return _grade_exec;
}

std::string From::GradeTooHighException()
{
	return "is too high.";
}

std::string From::GradeTooLowException()
{
	return "is too low.";
}

void	From::beSigned(Bureaucrat& bureaucrat)
{
	std::cout << bureaucrat.getGrade() << " | " << _grade_sign << std::endl;
	if (bureaucrat.getGrade() <= _grade_sign)
	{
		_sign = 1;
		std::cout << bureaucrat.getName() << " signed " << getName() << std::endl;
	}
	else
	{
		std::cout << bureaucrat.getName() << " couldn't sign " << getName() <<
		" because grade ";
		throw GradeTooLowException();
	}
}

std::ostream& operator<<(std::ostream& out, From& from)
{
	std::cout << from.getName();
	if (from.getSign() == 0)
		std::cout << ": sign no, grade for sign is ";
	else
		std::cout << ": sign yes, grade for sign is ";
	std::cout << from.getGradeSign() << " and the grade for execute is " <<
		from.getGradeExec();
	out << ".";
	return (out);
}