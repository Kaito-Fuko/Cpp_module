#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _grade(150)
{}

Bureaucrat::Bureaucrat(int grade): _grade(grade)
{}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _grade(other._grade)
{}

Bureaucrat::~Bureaucrat()
{}

bool Bureaucrat::GradeTooHighException()
{
	if (_grade < 1)
		return false;
	else
		return true;
}

bool Bureaucrat::GradeTooLowException()
{
	if (_grade > 150)
		return false;
	else
		return true;
}

std::string Bureaucrat::getName()
{
	return _name;
}

int Bureaucrat::getGrade()
{
	return _grade;
}

std::ofstream& operator<<(std::ofstream& out, Bureaucrat& bureaucrat)
{
	std::cout << bureaucrat.getName() << ", bureacrat grade " << bureaucrat.getGrade() << std::endl;
}