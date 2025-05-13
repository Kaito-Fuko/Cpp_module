#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> *_tab;

	public:
		Span();
		Span(int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		// addNumber(int i);
		// shortestSpan();
		// longestSpan();

};

#endif