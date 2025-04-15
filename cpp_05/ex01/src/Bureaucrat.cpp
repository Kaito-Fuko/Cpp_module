#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _grade(other._grade)
{
	if (other._grade < 1)
		throw GradeTooHighException();
	else if (other._grade > 150)
		throw GradeTooLowException();
	_grade = other._grade;
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this == &other)
		this->_grade = other._grade;
	return *this;
}

std::string Bureaucrat::GradeTooHighException()
{
	return "Grade too high!";
}

std::string Bureaucrat::GradeTooLowException()
{
	return "Grade too low!";
}

std::string Bureaucrat::getName()
{
	return _name;
}

int Bureaucrat::getGrade()
{
	return _grade;
}

void Bureaucrat::decrementGrade()
{
	if (_grade + 1 <= 150)
		_grade++;
	else
		throw GradeTooLowException();
}

void Bureaucrat::incrementGrade()
{
	if (_grade - 1 >= 1)
		_grade--;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::signForm(Form& Form)
{
	Form.beSigned(*this);
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureacrat grade " << bureaucrat.getGrade() << ".";
	return (out);
}