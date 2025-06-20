#ifndef RPN_HPP
# define RPN_HPP

# define RED "\033[0;38;5;196m"
# define BOLD "\033[1m"
# define END "\033[0m"

# include <iostream>
# include <stack>
# include <list>

class RPN
{
	private:
		std::stack<double> value;
		void calculator(std::string input);

	public:
		RPN(std::string input);
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		~RPN();

		int getValue();
};

#endif