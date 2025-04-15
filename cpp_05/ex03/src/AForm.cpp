#include "../include/AForm.hpp"

Form::Form(): _name("Default"), _sign(0), _grade_sign(150), _grade_exec(150)
{}

Form::Form(std::string name, int grade_sign, int grade_exec): _name(name), _sign(0), _grade_sign(grade_sign), _grade_exec(grade_exec)
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

Form::Form(const Form& other): _name(other._name), _sign(other._sign), _grade_sign(other._grade_sign), _grade_exec(other._grade_exec)
{}

Form::~Form()
{}

Form& Form::operator=(const Form& other)
{
	if (this == &other)
		this->_sign = other._sign;
	return *this;
}

const std::string Form::getName()
{
	return _name;
}

bool Form::getSign() const
{
	return _sign;
}

int Form::getGradeSign() const
{
	return _grade_sign;
}

int Form::getGradeExec() const
{
	return _grade_exec;
}

std::string Form::GradeTooHighException()
{
	return "is too high.";
}

std::string Form::GradeTooLowException()
{
	return "is too low.";
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
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

std::ostream& operator<<(std::ostream& out, Form& Form)
{
	std::cout << Form.getName();
	if (Form.getSign() == 0)
		std::cout << ": sign no, grade for sign is ";
	else
		std::cout << ": sign yes, grade for sign is ";
	std::cout << Form.getGradeSign() << " and the grade for execute is " <<
		Form.getGradeExec();
	out << ".";
	return (out);
}