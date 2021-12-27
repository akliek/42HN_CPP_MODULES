#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename type>
void	swap(type &x, type &y)
{
	type tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <typename type>
type	min(type x, type y)
{
	if (x < y)
		return (x);
	return (y);			
}

template <typename type>
type	max(type x, type y)
{
	if (x > y)
		return (x);
	return (y);			
}

#endif
