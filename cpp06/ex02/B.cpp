#include "B.hpp"

B::B(void)
{
	std::cout << "B Constructor called" << std::endl;
}

B::~B(void)
{
	std::cout << "B Destructor called" << std::endl;
}

B::B(const B &copy)
{
	std::cout << "B Copy constructor called" << std::endl;
	*this = copy;
}

B	&B::operator = (const B &copy)
{
	std::cout << "B Assignation operator called" << std::endl;
	(void)copy;
	return (*this);
}
