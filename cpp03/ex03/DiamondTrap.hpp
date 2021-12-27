#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string	name;
	public:
		DiamondTrap(std::string name);
		~DiamondTrap(void);
		DiamondTrap(const DiamondTrap &copy);

		DiamondTrap	&operator = (const DiamondTrap &copy);

		void	whoAmI(void);
		void	attack(std::string const &target);
};

#endif
