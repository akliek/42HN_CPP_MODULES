#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string	type;
	public:
		Animal(std::string type);
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &copy);

		virtual Animal	&operator = (const Animal &copy);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
		virtual Brain	*getBrain(void) const;	
};

#endif
