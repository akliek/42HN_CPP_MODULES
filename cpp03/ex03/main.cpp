#include "DiamondTrap.hpp"

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
	{
		std::cout << std::endl;
		FragTrap	FragTrap1("Jimmy");

		FragTrap1.attack("Hendrix");
		FragTrap1.takeDamage(10);
		FragTrap1.beRepaired(5);
		FragTrap1.highFivesGuys();
	}
	{
		std::cout << std::endl;
		DiamondTrap	DiamondTrap1("WTF");

		DiamondTrap1.attack("Dude");
		DiamondTrap1.takeDamage(10);
		DiamondTrap1.beRepaired(5);
		DiamondTrap1.highFivesGuys();
		DiamondTrap1.guardGate();
		DiamondTrap1.whoAmI();
	}

	return (0);
}
