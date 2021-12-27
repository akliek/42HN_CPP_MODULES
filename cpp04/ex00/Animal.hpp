#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal(std::string type);
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &copy);

		Animal	&operator = (const Animal &copy);

		std::string			getType(void) const;
		virtual void		makeSound(void) const;
};

#endif
