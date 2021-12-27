#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal defaul constructor called" << std::endl;
	this->type = "";
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
	std::cout << " WrongAnimal type consttuctor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::cout;
	*this = copy;
}

WrongAnimal	&WrongAnimal::operator = (const WrongAnimal &copy)
{
	std::cout << "WrongAnimal assignation operator caleed" << std::endl;
	this->type = copy.type;

	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound" << std::endl;
}
