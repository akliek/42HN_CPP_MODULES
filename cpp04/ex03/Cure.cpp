#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &copy): AMateria("cure")
{
	*this = copy;
}

Cure	&Cure::operator = (const Cure &copy)
{
	this->type = copy.type;

	return (*this);
}

AMateria	*Cure::clone(void) const
{
	Cure	*clone = new Cure(*this);

	return (clone);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
