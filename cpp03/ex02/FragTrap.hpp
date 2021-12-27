#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &copy);

		FragTrap	&operator = (const FragTrap &copy);

        void    highFivesGuys(void);
};

#endif
