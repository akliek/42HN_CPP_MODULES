/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 10:36:08 by akliek            #+#    #+#             */
/*   Updated: 2021/11/06 14:26:22 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);

		void	set_name(std::string name);
		void	announce(Zombie *horde, int N);
	private:
		std::string	zombie_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
