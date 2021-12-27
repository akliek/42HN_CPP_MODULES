#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constuctor called" << std::endl;
    this->type = "Dog";
	this->mind = new Brain();
}

Dog::~Dog(void)
{
	delete this->mind;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy constructor called" << std::cout;
	*this = copy;
}

Dog	&Dog::operator = (const Dog &copy)
{
	std::cout << "Dog assignation operator caleed" << std::endl;
	this->type = copy.type;
	*this->mind = *(copy.getBrain());

	return (*this);
}

Animal	&Dog::operator = (const Animal &copy)
{
	std::cout << "Cat assignation operator caled" << std::endl;
	this->type = copy.getType();
	*this->mind = *(copy.getBrain());

	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "----> woof, bark, ruff <----" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->mind);
}
