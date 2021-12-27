#include "A.hpp"

A::A(void)
{
	std::cout << "A Constructor called" << std::endl;
}

A::~A(void)
{
	std::cout << "A Destructor called" << std::endl;
}

A::A(const A &copy)
{
	std::cout << "A Copy constructor called" << std::endl;
	*this = copy;
}

A	&A::operator = (const A &copy)
{
	std::cout << "A Assignation operator called" << std::endl;
	(void)copy;
	return (*this);
}
