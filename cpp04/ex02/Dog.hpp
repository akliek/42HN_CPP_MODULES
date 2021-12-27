#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain	*mind;
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &copy);

		Dog				&operator = (const Dog &copy);
		virtual Animal	&operator = (const Animal &copy);

		void	makeSound(void) const;
		Brain	*getBrain(void) const;
};

#endif
