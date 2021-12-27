#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string	type;
	public:
		virtual ~Animal(void);

		virtual Animal	&operator = (const Animal &copy) = 0;

		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;
		virtual Brain	*getBrain(void) const = 0;	
};

#endif
