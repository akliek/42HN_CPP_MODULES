#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &copy): AMateria("ice")
{
	*this = copy;
}

Ice	&Ice::operator = (const Ice &copy)
{
	this->type = copy.type;

	return (*this);
}

AMateria	*Ice::clone(void) const
{
	Ice	*clone = new Ice(*this);

	return (clone);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
