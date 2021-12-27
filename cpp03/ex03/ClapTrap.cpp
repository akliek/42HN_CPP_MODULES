#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name(""), hitpoints(10), energy_points(10), attack_damage(0)
{
	std::cout << "Greetings traveler ClapTrap " << name << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitpoints(10), energy_points(10), attack_damage(0)
{
	std::cout << "Greetings traveler ClapTrap " << name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Press F to respect ClapTrap " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap copy constructor" << std::endl;
	*this = copy;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &copy)
{
	std::cout << "ClapTrap assignation operator" << std::endl;
	this->name = copy.name;
	this->hitpoints = copy.hitpoints;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
	
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (hitpoints > 0)
		std::cout << "ClapTrap " << name << " attack " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
	else
		std::cout << "Chill dude, you are already dead" << std::endl;	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitpoints > 0)
	{
		std::cout << "ClapTrap " << name << " have taken " << amount << " points of damage" << std::endl;
		hitpoints -= amount;
	}
	else
		std::cout << "Don't play with " << name << " 's corpse, it is alredy dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_points > 0)
	{
		std::cout << "ClapTrap " << name << " received " << amount << " hitpoints" << std::endl;
		energy_points--;
		hitpoints += amount;
	}
	else
		std::cout << "ClapTrap " << name << " can't be repaired, cause of not enough energy points" << std::endl;
}
