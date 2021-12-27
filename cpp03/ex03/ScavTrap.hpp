#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	protected:
		ScavTrap(void);
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &copy);

		ScavTrap	&operator = (const ScavTrap &copy);

		void		attack(std::string const &target);
		void		guardGate(void);
};

#endif
