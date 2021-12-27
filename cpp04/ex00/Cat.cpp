#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constuctor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copy constructor called" << std::cout;
	*this = copy;
}

Cat	&Cat::operator = (const Cat &copy)
{
	std::cout << "Cat assignation operator caleed" << std::endl;
	this->type = copy.type;

	return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "----> meow <----" << std::endl;
}
