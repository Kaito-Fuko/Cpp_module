#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5), _target("default")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): Form("PresidentialPardonForm", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): Form(other), _target(other._target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other) {
        Form::operator=(other);
        _target = other._target;
    }
    return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (!this->getSign())
		throw FormNotSigned();
	if (executor.getGrade() > this->getGradeExec())
	{
		throw GradeTooLowForExec();
	}
	std::cout << _target << " was pardoned by Zaphod Beeblebrox" << std::endl;
}
