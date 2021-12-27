#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain	*mind;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &copy);

		Cat				&operator = (const Cat &copy);
		virtual	Animal	&operator = (const Animal &copy);

        void    makeSound(void) const;
		Brain	*getBrain(void) const;
};

#endif
