#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria		*materias[4];
		unsigned int	is_learned;
	public:
		MateriaSource(void);
		~MateriaSource();
		MateriaSource(const MateriaSource &copy);

		MateriaSource	&operator  = (const MateriaSource &copy);

		void		learnMateria(AMateria *);
		AMateria	*createMateria(std::string const &type);
};

#endif
