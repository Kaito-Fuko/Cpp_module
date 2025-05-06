#ifndef ITER_HPP
# define ITER_HPP

// temp1 = &tab
# include <iostream>

template <typename T>
void	iter(T* tab, size_t size, void(*f)(T const &))
{
	for (int i = 0; i < (int)size; i++)
		f(tab[i]);
}

#endif