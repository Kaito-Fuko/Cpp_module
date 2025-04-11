#include "../include/From.hpp"

From::From(): _name("Default"), _sign(0), _grade_sign(150), _grade_exec(150)
{}

From::From(std::string name, bool sign, int grade_sign, int grade_exec): _name(name), _sign(sign), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	// if (grade_exec > 150)
		
	// else if (grade_exec < 1);
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

const int From::getGradeSign()
{
	return _grade_sign;
}

const int From::getGradeExec()
{
	return _grade_exec;
}

std::ostream& operator<<(std::ostream& out, From& from)
{
	std::cout << from.getName();
	if (from.getSign() == 0)
		std::cout << ": sign no, grade for sign is ";
	else
		std::cout << ": sign yes, grade for sign is ";
	std::cout << from.getGradeSign() << " and the grade for execute is " <<
		from.getGradeExec() << std::endl;
}