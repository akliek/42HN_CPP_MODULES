#include "iter.hpp"
#include <iostream>

void	func1(int &x)
{
	x++;
}

void	func2(std::string &x)
{
	x += " ";
}

int	main(void)
{
	int			int_arr[4] = {1, 2, 3, 4};
	std::string	string_arr[6] = {"Bang", "Bang", "he", "shot", "me", "down"};

	iter<int>(int_arr, 4, func1);

	for (int i = 0; i < 4; i++)
		std::cout << int_arr[i] << std::endl;

	iter<std::string>(string_arr, 6, func2);

	for (int i = 0; i < 6; i++)
		std::cout << string_arr[i];	

	return (0);
}
