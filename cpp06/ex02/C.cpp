#include "C.hpp"

C::C(void)
{
	std::cout << "C Constructor called" << std::endl;
}

C::~C(void)
{
	std::cout << "C Destructor called" << std::endl;
}

C::C(const C &copy)
{
	std::cout << "C Copy constructor called" << std::endl;
	*this = copy;
}

C	&C::operator = (const C &copy)
{
	std::cout << "C Assignation operator called" << std::endl;
	(void)copy;
	return (*this);
}
