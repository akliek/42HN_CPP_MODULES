#include "mutantstack.hpp"

int	main(void)
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

	MutantStack<std::string>	mutstack;

	mutstack.push("bang ");
	mutstack.push("bang ");
	mutstack.push("he ");
	mutstack.push("shot ");
	mutstack.push("me ");
	mutstack.push("down");

	MutantStack<std::string>::iterator	i = mutstack.begin();
	MutantStack<std::string>::iterator	iter = mutstack.end();

	--iter;
	while (i - 1 != iter)
	{
		std::cout << *iter << std::endl;
		--iter;
	}

	return (0);
}
