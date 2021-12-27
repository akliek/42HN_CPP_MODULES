#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	protected:
		FragTrap(void);
	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &copy);

		FragTrap	&operator = (const FragTrap &copy);

        void    highFivesGuys(void);
};

#endif
