#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack<T>(void) { }
		~MutantStack<T>(void) { }
		MutantStack<T>(const MutantStack &copy)
		{
			*this = copy;
		}

		MutantStack	&operator = (const MutantStack &copy)
		{
			(void)copy;

			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin(void)
		{
			return (this->c.begin());
		}
		iterator	end(void)
		{
			return (this->c.end());
		}
};

#endif
