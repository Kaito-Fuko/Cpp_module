#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 145, 137), _target("default")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): Form("RobotomyRequestForm", 145, 137), _target(target)
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
        throw std::string("Form is not signed.");
    if (executor.getGrade() > this->getGradeExec())
        throw std::string("Executor has too low grade.");

    std::cout << "BRRRRRRRRrrrrrr BBBBRRRRRRRRRRRRrrrrrr." << std::endl;

    if (std::rand() % 2 == 0)
        std::cout << _target << " has been successfully robotomy." << std::endl;
    else
        std::cout << "Failure" << _target << " was not robotomy" << std::endl;
}