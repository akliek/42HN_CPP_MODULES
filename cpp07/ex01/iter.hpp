#ifndef ITER_HPP
# define ITER_HPP

template <typename type>
void	iter(type *arr, int len, void (*func)(type &))
{
	for (int i = 0; i < len; i++)
		func(arr[i]);
}

#endif
