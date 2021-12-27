/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:20:15 by akliek            #+#    #+#             */
/*   Updated: 2021/10/12 11:45:40 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	j = 1;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			c = toupper(argv[j][i]);
			std::cout << c;
			i++;
		}
		j++;
	}
	std::cout << std::endl;
	return (0);
}
