#include "Form.hpp"

int	main(void)
{
	try
	{
		Form		form("Renting", 60, 100);
		Bureaucrat	bureaucrat("Hermes", 70);

		form.beSigned(bureaucrat);
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
