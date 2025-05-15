#include "../include/Span.hpp"

Span::Span(): _tab(NULL)
{}

Span::Span(int N): _N(N)
{
	_tab = new std::vector<int>[N]();
}

Span::Span(const Span& other)
{
	_tab = NULL;
	for (int i = 0; i < (int)_N; i++)
		_tab[i] = other._tab[i];
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		delete[] _tab;
		_tab = NULL;
		for (int i = 0; i < (int)_N; i++)
			_tab[i] = other._tab[i];
		_N = other._N;
	}
	return *this;
}

Span::~Span()
{
	delete[] _tab;
}

void	Span::addNumber(int i)
{
	(void)i;
	if (_tab->size() >= _N)
		throw TooMuchException();
	else
		_tab->push_back(i);
}

int	Span::shortestSpan() const
{
	if (_tab->size() < 2)
		throw AFewException();
	return (0);
}

int	Span::longestSpan() const
{
	if (_tab->size() < 2)
		throw AFewException();
	return (0);
}

const char* Span::AFewException::what() const throw()
{
	return "NON.";
}

const char* Span::TooMuchException::what() const throw()
{
	return "Is full.";
}