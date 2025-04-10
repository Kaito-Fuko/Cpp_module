#include "../include/From.hpp"

From::From(): _name("Default"), _sign(0), _grade_sign(150), _grade_exec(150)
{}

From::From(std::string name, bool sign, int grade_sign, int grade_exec): _name(name), _sign(sign), _grade_sign(grade_sign), _grade_exec(grade_exec)
{}

From::From(const From& other): _name(other._name)
{
	_sign = other._sign;
	_grade_sign = other._grade_sign;
	_grade_exec = other._grade_exec;
}

From::~From()
{}