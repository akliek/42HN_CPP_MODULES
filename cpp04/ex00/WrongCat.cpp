#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat constuctor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat copy constructor called" << std::cout;
	*this = copy;
}

WrongCat	&WrongCat::operator = (const WrongCat &copy)
{
	std::cout << "WrongCat assignation operator caleed" << std::endl;
	this->type = copy.type;

	return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "----> meow <----" << std::endl;
}
