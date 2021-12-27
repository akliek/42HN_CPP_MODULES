#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat				bureaucrat("Hermes", 40);
		RobotomyRequestForm		robotomy("Conrad");
		ShrubberyCreationForm	shrubbery("Garden");
		PresidentialPardonForm	president("Marvin");

		std::cout << bureaucrat << std::endl;

		shrubbery.beSigned(bureaucrat);
		president.beSigned(bureaucrat);

		robotomy.execute(bureaucrat);
		shrubbery.execute(bureaucrat);
		president.execute(bureaucrat);

		std::cout << shrubbery << std::endl;
		std::cout << robotomy << std::endl;
		std::cout << president << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
