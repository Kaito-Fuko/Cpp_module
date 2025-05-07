#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

template <typename T>
class Array
{
	private:
		T *_tab;
		unsigned int _size;

	public:
		Array();
		Array(unsigned int N);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();

		unsigned int size();
		T&	operator[](unsigned int i);

		class Exception : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

template <typename T>
Array<T>::Array()
{
	_tab(NULL);
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int N): _size(N)
{
	_tab = new T[N]();
}

template <typename T>
Array<T>::Array(const Array<T>& other): _tab(other._tab), _size(other._size)
{}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this != *other)
	{
		_tab = other._tab;
		_size = other._size;
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	if (_size > 0 )
		delete[] _tab;
}

template <typename T>
unsigned int Array<T>::size()
{
	return (_size);
}

template <typename T>
T&	Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw Exception();
	return _tab[i];
}

template <typename T>
const char* Array<T>::Exception::what()const throw()
{
	return "Error: index invalid.";
}

#endif