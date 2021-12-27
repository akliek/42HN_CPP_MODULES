#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string		name;
		unsigned int	hitpoints;
		unsigned int	energy_points;
		unsigned int	attack_damage;
	public:
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &copy);

		ClapTrap	&operator = (const ClapTrap &copy);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
