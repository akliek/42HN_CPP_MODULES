#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "Greetings traveler ScavTrap " << name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Press F to respect ScavTrap " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap copy constructor" << std::endl;
	*this = copy;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &copy)
{
	std::cout << "ScavTrap assignation operator" << std::endl;
	this->name = copy.name;
	this->hitpoints = copy.hitpoints;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;

	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	if (hitpoints > 0)
		std::cout << "ScavTap " << name << " attack " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
	else
		std::cout << "Chill dude, you are already dead" << std::endl;	
}

void	ScavTrap::guardGate(void)
{
	std::cout << "AAAAAAAA ScavTrap " << name << " have entered to Gate keeper mode, it's something serious I guess!!!" << std::endl;
}
