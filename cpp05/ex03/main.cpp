#include "Intern.hpp"

int	main(void)
{
	try
	{
		Intern	me;
		Form	*res;

		res = me.makeForm("presial pardon", "marvin");
		if (res)
		{
			std::cout << *res << std::endl;
			delete res;
		}
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
