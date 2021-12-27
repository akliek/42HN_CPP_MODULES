#include "ScavTrap.hpp"

int	main(void)
{
	{
		ClapTrap	ClapTrap1("Fake Lebowski");

		ClapTrap1.attack("Small Lebowski");
		ClapTrap1.takeDamage(2);
		ClapTrap1.beRepaired(1);
	}
	{
		std::cout << std::endl;
		ScavTrap	ScavTrap1("Lebowski");

		ScavTrap1.attack("Big Lebowski");
		ScavTrap1.takeDamage(10);
		ScavTrap1.beRepaired(5);
		ScavTrap1.guardGate();
	}
	return (0);
}
