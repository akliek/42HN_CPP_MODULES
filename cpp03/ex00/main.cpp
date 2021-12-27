#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ClapTrap1("Lebowski");

	ClapTrap1.attack("Fake Lebowski");
	ClapTrap1.takeDamage(1);
	ClapTrap1.beRepaired(1);

	return (0);
}
