#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	b("Hermes", 1);

		b.incrementGrade(1);
		std::cout << b << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	Hermes("Conrad", 120);

		Hermes.decrementGrade(40);
		std::cout << Hermes << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	Conrad("Hermes", 120);

		Conrad.incrementGrade(119);
		std::cout << Conrad << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
