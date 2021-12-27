#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		std::string	thoughts[100];

		Brain(void);
		~Brain(void);
		Brain(const Brain &copy);

		Brain	&operator = (const Brain &copy);
};

#endif
