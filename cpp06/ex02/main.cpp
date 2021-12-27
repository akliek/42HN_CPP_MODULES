#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int	num;

	num = rand() % 100 + 1;

	if (num >= 1 && num <= 33)
		return (new A);
	else if (num > 33 && num <= 66)
		return (new B);
	return (new C);		
}

void	identify(Base *p)
{
	if (A *a = dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (B *b = dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (C *c = dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Undefined" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}

	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}

	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	std::cout << "Undifined" << std::endl;
}

int	main(void)
{ 
	Base	*test1;
	Base	*test2;
	Base	*test3;
	Base	*test4;

	test1 = generate();
	identify(test1);
	identify(*test1);
	delete test1;

	std::cout << std::endl;

	test2 = generate();
	identify(test2);
	identify(*test2);
	delete test2;

	std::cout << std::endl;

	test3 = generate();
	identify(test3);
	identify(*test3);
	delete test3;

	std::cout << std::endl;

	test4 = generate();
	identify(test4);
	identify(*test4);
	delete test4;

	return (0);
}
