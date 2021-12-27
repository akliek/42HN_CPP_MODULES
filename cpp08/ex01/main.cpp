#include "span.hpp"

int	main(void)
{
	try
	{
		span	s = span(5);
		span	sp = span(100000);

		s.addNumber(-34);
		s.addNumber(0);
		s.addNumber(10);
		s.addNumber(5);
		s.addNumber(2);

		sp.addNumber(100000, 100000, -3425);

		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
		std::cout << "\n" << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
