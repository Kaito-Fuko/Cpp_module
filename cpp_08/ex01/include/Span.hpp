#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _tab;

	public:
		Span();
		Span(int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int i);
		int shortestSpan() const;
		int longestSpan() const;

		class TooMuchException: public std::exception
		{
			public:
				const char* what() const throw();
		};

		class AFewException: public std::exception
		{
			public:
				const char* what() const throw();
		};

		void printSpan();
		// void printSpan(std::vector<int>* tmp);
};

#endif