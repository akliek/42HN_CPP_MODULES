#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << "Should be dog type: " << j->getType() << " " << std::endl;
		std::cout << "Should be cat type: " << i->getType() << " " << std::endl;
		std::cout << "Should be cat sound: ";
		i->makeSound();
		std::cout << "Should be dog sound: ";
		j->makeSound();
		std::cout << "Should be animal sound: ";
		meta->makeSound();

		delete j;
		delete i;
		delete meta;
	}
	{
		std::cout << std::endl;

		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << "Should be WrongCat type: " << i->getType() << " " << std::endl;
		std::cout << "Should be WrongAnimal sound: ";
		i->makeSound();
		std::cout << "Should be WrongAnimal sound: ";
		meta->makeSound();

		delete i;
		delete meta;
	}
	return (0);
}
