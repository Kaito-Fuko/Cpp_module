#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename Func>
void iter(const T* tab, size_t size, Func f)
{
	for (int i = 0; i < (int)size; i++)
		f(const_cast<T&>(tab[i]));
}

#endif