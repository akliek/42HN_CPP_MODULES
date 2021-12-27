#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constuctor called" << std::endl;
    this->type = "Cat";
	this->mind = new Brain();
}

Cat::~Cat(void)
{
	delete this->mind;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copy constructor called" << std::cout;
	*this = copy;
}

Cat	&Cat::operator = (const Cat &copy)
{
	std::cout << "Cat assignation operator caled" << std::endl;
	this->type = copy.type;
	*this->mind = *(copy.getBrain());

	return (*this);
}

Animal	&Cat::operator = (const Animal &copy)
{
	std::cout << "Cat assignation operator caled" << std::endl;
	this->type = copy.getType();
	*this->mind = *(copy.getBrain());

	return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "----> meow <----" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->mind);
}
