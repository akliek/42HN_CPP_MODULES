#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal defaul constructor called" << std::endl;
	this->type = "";
}

Animal::Animal(std::string type): type(type)
{
	std::cout << " Animal type consttuctor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::cout;
	*this = copy;
}

Animal	&Animal::operator = (const Animal &copy)
{
	std::cout << "Animal assignation operator caled" << std::endl;
	this->type = copy.type;

	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
}

Brain	*Animal::getBrain(void) const
{
	return (NULL);
}
