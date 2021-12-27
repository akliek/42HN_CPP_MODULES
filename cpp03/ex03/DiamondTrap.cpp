#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->hitpoints = FragTrap::hitpoints;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "Greetings traveler DiamondTrap " << name << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Press F to respect DiamondTrap " << name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap copy constructor" << std::endl;
	*this = copy;
}

DiamondTrap	&DiamondTrap::operator = (const DiamondTrap &copy)
{
	std::cout << "DiamondTrap assignation operator" << std::endl;
	ClapTrap::name = copy.name + "_clap_name";
	this->name = copy.name;
	this->hitpoints = copy.hitpoints;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
	
	return (*this);
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Name - " << name << ", ClapTrap name - " << ClapTrap::name << std::endl;
}
