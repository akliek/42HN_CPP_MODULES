#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
	is_equiped = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(void)
{
	this->name = "";
	is_equiped = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::~Character(void)
{
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character	&Character::operator = (const Character &copy)
{
	this->name = copy.name;
	is_equiped = 0;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = copy.inventory[i];
		if (copy.inventory[i])
			is_equiped++;
	}

	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	if (this->is_equiped == 4)
		std::cout << "Inventory is full" << std::endl;
	else if (!m)
		std::cout << "You don't know this materia" << std::endl;	
	else
	{
		this->inventory[this->is_equiped] = m;
		this->is_equiped++;
	}
}

void	Character::unequip(int idx)
{
	unsigned int	i;

	i = idx + 1;
	if (this->is_equiped == 0)
		std::cout << "Inventory is empty" << std::endl;
	else if (idx < 0 || idx > 3)
		std::cout << "This slot is already empty" << std::endl;	
	else
	{
		while (i < this->is_equiped)
		{
			this->inventory[i - 1] = this->inventory[i];
			i++;
		}
		this->inventory[i] = NULL;
		this->is_equiped--;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= (int)this->is_equiped)
		std::cout << "This slot is empty" << std::endl;
	else
		this->inventory[idx]->use(target);
}
