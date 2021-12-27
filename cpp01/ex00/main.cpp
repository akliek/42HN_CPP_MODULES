/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 10:45:34 by akliek            #+#    #+#             */
/*   Updated: 2021/10/25 10:56:36 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Case1:" << std::endl;
	{
		Zombie	Lebowski = Zombie("Lebowski");
	}
	
	std::cout << "Case2:" << std::endl;
	Zombie	*Peter = newZombie("Peter");
	delete Peter;

	std::cout << "Case2:" << std::endl;
	randomChump("Homer");
	
	return (0);
}
