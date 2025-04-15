#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 145, 137), _target("default")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): Form("PresidentialPardonForm", 145, 137), _target(target)
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
	// (void ) executor;
	if (!this->getSign())
		throw std::string("From not signed.");
	if (executor.getGrade() > this->getGradeExec())
	{
		throw std::string("Executor is too low for signed.");
	}
	std::cout << _target << " was pardoned by Zaphod Beeblebrox";
}
