#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& temp1, T& temp2)
{
	T tmp = temp1;

	temp1 = temp2;
	temp2 = tmp;
}

template <typename T>
T min(const T temp1, const T temp2)
{
	if (temp1 >= temp2)
		return temp2;
	return temp1;
}

template <typename T>
T max(const T temp1, const T temp2)
{
	if (temp1 > temp2)
		return temp1;
	return temp2;
}

#endif