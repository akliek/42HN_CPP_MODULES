#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->name = "";
	this->hitpoints = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "Greetings traveler FragTrap " << name << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "Greetings traveler FragTrap " << name << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Press F to respect FragTrap " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap copy constructor" << std::endl;
	*this = copy;
}

FragTrap	&FragTrap::operator = (const FragTrap &copy)
{
	std::cout << "ScavTrap assignation operator" << std::endl;
	this->name = copy.name;
	this->hitpoints = copy.hitpoints;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
	
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "A positive high fives request" << std::endl;
}
