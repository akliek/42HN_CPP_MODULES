/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 10:40:06 by akliek            #+#    #+#             */
/*   Updated: 2021/11/06 14:26:04 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(Zombie *horde, int N)
{
	for (int i = 0; i < N; i++)
		std::cout << horde[i].zombie_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->zombie_name = name;
}

Zombie::Zombie(void)
{
	this->zombie_name = "";
}

Zombie::~Zombie(void)
{
	std::cout << this->zombie_name << " is very dead :(" << std::endl;
}
