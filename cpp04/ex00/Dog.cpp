#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constuctor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog(void)
{
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

	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "----> woof, bark, ruff <----" << std::endl;
}
