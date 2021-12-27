#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string		name;
		AMateria		*inventory[4];
		unsigned int	is_equiped;

		Character(void);
	public:
		Character(std::string name);
		~Character();
		Character(const Character &copy);

		Character	&operator = (const Character &copy);

		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif
