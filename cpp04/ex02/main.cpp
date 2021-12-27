#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	int		i;
	Animal	*a[4];

//	Animal	test = new Animal();

	std::cout << "-------> Constructors <-------" << std::endl;
	for (i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			a[i] = new Dog();
		else
			a[i] = new Cat();
	}
	std::cout << "-------> Deep copy proof <-------" << std::endl;
	a[0]->getBrain()->thoughts[0] = "thought 0";
	std::cout << a[0]->getBrain()->thoughts[0] << std::endl;
	(*a[2]) = (*a[0]);
	a[0]->getBrain()->thoughts[0] = "empty head";
	std::cout << a[2]->getBrain()->thoughts[0] << std::endl;
	std::cout << "-------> Destructors <-------" << std::endl;
	for (i = 0; i < 4; i++)
		delete a[i];

	return (0);
}
