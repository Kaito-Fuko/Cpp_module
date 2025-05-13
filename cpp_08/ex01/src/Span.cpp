#include "../include/Span.hpp"

Span::Span(): _tab(NULL)
{}

Span::Span(int N): _N(N)
{
	_tab = new std::vector<int>[N]();
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
		delete[] _tab;
		_tab = NULL;
		_N = other._N;
	}
	return *this;
}

Span::~Span()
{
	delete[] _tab;
}
