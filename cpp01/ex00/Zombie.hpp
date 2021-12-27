/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 10:36:08 by akliek            #+#    #+#             */
/*   Updated: 2021/11/06 14:24:55 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
	private:
		std::string	zombie_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
