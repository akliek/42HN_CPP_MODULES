/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:58:19 by akliek            #+#    #+#             */
/*   Updated: 2021/10/25 15:08:17 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	this->name.clear();
}
