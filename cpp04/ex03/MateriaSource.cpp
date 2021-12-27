#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	this->is_learned = 0;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
}

MateriaSource	&MateriaSource::operator = (const MateriaSource &copy)
{
	this->is_learned = 0;
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
		this->materias[i] = copy.materias[i];
		if (this->materias[i])
			this->is_learned++;
	}

	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (is_learned == 4)
		std::cout << "You know too much" << std::endl;
	else
	{
		this->materias[this->is_learned] = m;
		is_learned++;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int			i;

	i = this->is_learned - 1;
	while (i >= 0)
	{
		if (type.compare(this->materias[i]->getType()) == 0)
			return (this->materias[i]->clone());
		i--;
	}
	return (NULL);
}
