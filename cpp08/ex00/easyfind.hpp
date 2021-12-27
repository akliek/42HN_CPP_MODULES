#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <iterator>

class	NotFoundException: public std::exception
{
	public:
		virtual const char *what() const throw();
};

const char *NotFoundException::what() const throw()
{
	return ("Number not found");
}

template <typename T>
typename T::iterator	easyfind(T a, int b)
{
	typename T::iterator	i;

	i = find(a.begin(), a.end(), b);
	if (i == a.end())
		throw NotFoundException();
	return (i);
}

#endif
