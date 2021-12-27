/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:12:56 by akliek            #+#    #+#             */
/*   Updated: 2021/10/25 12:29:05 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address of the string - " << &str << std::endl;
	std::cout << "Address of the string using the stringPTR - " << stringPTR << std::endl;
	std::cout << "Address of the string using the stringREF - " << &stringREF << std::endl;
	std::cout << "The string using stringPTR - " << *stringPTR << std::endl;
	std::cout << "The string using stringREF - " << stringREF << std::endl;
}
