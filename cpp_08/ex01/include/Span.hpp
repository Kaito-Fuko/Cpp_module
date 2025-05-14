#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>

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

		void addNumber(int i);
		int shortestSpan() const;
		int longestSpan() const;

		class TooMuch: std::exception
		{
			const char* what() const throw();
		};

};

#endif