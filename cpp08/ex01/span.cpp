#include "span.hpp"

span::span(unsigned int N): N(N)
{
}

span::~span(void)
{
}

span::span(const span &copy)
{
	std::cout << "span Copy constructor called" << std::endl;
	*this = copy;
}

span	&span::operator = (const span &copy)
{
	this->N = copy.N;
	this->v = copy.v;

	return (*this);
}

void	span::addNumber(int num)
{
	v.push_back(num);
	if (v.size() > this->N)
		throw span::TooManyNumbers();
}

void	span::addNumber(unsigned int num_of_nums, int biggest_num, int lowest_num)
{
	for (unsigned int i = 0; i < num_of_nums; i++)
		v.push_back(rand() % biggest_num + lowest_num);
	if (v.size() > this->N)
		throw span::TooManyNumbers();
}

int		span::longestSpan(void)
{
	std::vector<int>	longest = this->v;

	if (v.size() <= 1)
		throw span::NoSpan();

	sort(longest.begin(), longest.end());
	return (*(longest.end() - 1) - *longest.begin());
}

int		span::shortestSpan(void)
{
	int							l;
	std::vector<int>::iterator	i;
	std::vector<int>::iterator	j;
	std::vector<int>			shortest = this->v;

	if (v.size() <= 1)
		throw span::NoSpan();

	sort(shortest.begin(), shortest.end());
	i = shortest.begin();
	j = shortest.begin();
	l = *(++j) - *i;

	for (; j != shortest.end(); j++)
	{
		if (*j - *i < l)
			l = *j - *i;
		i++;
	}

	return (l);
}

const char *span::TooManyNumbers::what() const throw()
{
	return ("Exception: too many numbers");
}

const char *span::NoSpan::what() const throw()
{
	return ("Exception: no span");
}
