#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain defaul constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::cout;
	*this = copy;
}

Brain	&Brain::operator = (const Brain &copy)
{
	std::cout << "Brain assignation operator caled" << std::endl;
	for (int i = 0; i < 100; i++)
		this->thoughts[i] = copy.thoughts[i];

	return (*this);
}
