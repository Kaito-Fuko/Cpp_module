#include "../include/Span.hpp"

Span::Span(): _tab(0)
{}

Span::Span(int N): _N(N)
{
	_tab.reserve(N);
}

Span::Span(const Span& other)
{
	for (int i = 0; i < (int)_N; i++)
		_tab[i] = other._tab[i];
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		for (int i = 0; i < (int)_N; i++)
			_tab[i] = other._tab[i];
		_N = other._N;
	}
	return *this;
}

Span::~Span()
{}

void	Span::addNumber(int i)
{
	(void)i;
	if (_tab.size() >= _N)
		throw TooMuchException();
	else
		_tab.push_back(i);
}

int	Span::shortestSpan() const
{
	if (_tab.size() < 2)
		throw AFewException();

	std::vector<int> tmp = _tab;
	std::sort(tmp.begin(), tmp.end());
	
	int j = std::abs(tmp[1] - tmp[0]);

	for (size_t i = 1; i < tmp.size() - 1; ++i)
	{
		int temp = std::abs(tmp[i+1] - tmp[i]);
		if (temp < j)
			j = temp;
	}
	return j;
}

int	Span::longestSpan() const
{
	if (_tab.size() < 2)
		throw AFewException();
	int i = *std::min_element(_tab.begin(), _tab.end());
	int j = *std::max_element(_tab.begin(), _tab.end());
	return j - i;
}

const char* Span::AFewException::what() const throw()
{
	return "Not enough element.";
}

const char* Span::TooMuchException::what() const throw()
{
	return "Is full.";
}