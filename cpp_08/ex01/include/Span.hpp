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
		template <typename InputIterator>
		void addMultiNumber(InputIterator begin, InputIterator end);

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

template <typename InputIterator>
void Span::addMultiNumber(InputIterator begin, InputIterator end)
{
	for (; begin != end; ++begin)
	{
		if (_tab.size() >= _N)
			throw Span::TooMuchException();
		_tab.push_back(*begin);
	}
}

#endif