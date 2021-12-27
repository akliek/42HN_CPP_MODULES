#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class A: public Base
{
	private:
		/*private members*/
	public:
		A(void);
		~A(void);
		A(const A &copy);

		A	&operator = (const A &copy);
};

#endif
