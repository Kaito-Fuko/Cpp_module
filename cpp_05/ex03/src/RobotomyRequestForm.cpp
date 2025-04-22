#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45), _target("default")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): Form("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): Form(other), _target(other._target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other) {
		Form::operator=(other);
		_target = other._target;
	}
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (!this->getSign())
		throw FormNotSigned();
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowForExec();

	std::cout << "BRRRRRRRRrrrrrr BBBBRRRRRRRRRRRRrrrrrr." << std::endl;

	if (std::rand() % 2 == 0)
		std::cout << _target << " has been successfully robotomy." << std::endl;
	else
		std::cout << "Failure" << _target << " was not robotomy" << std::endl;
}