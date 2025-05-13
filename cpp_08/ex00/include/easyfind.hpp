#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <exception>

class NotFound : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Value not found.";
		}
};

template <typename T>
typename T:: const_iterator easyfind(const T& temp, int i)
{
	typename T::const_iterator it = std::find(temp.begin(), temp.end(), i);	
	if (it == temp.end())
		throw NotFound();
	return it;
}

#endif