/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:23:39 by akliek            #+#    #+#             */
/*   Updated: 2021/10/25 12:47:35 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string	name)
{
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].set_name(name);

	horde->announce(horde, 5);
	
	return (horde);
}
