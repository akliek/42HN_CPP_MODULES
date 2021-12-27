#include "easyfind.hpp"
#include <iostream>

int	main(void)
{
	std::vector<int> v;
	std::vector<int>::iterator i;

	for (int i = 0; i < 20; i++)
		v.push_back(i);
	try
	{
		i = easyfind(v, 3453);
		std::cout << *i << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
