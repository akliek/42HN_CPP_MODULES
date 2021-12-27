#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class B: public Base
{
	private:
		/*private members*/
	public:
		B(void);
		~B(void);
		B(const B &copy);

		B	&operator = (const B &copy);
};

#endif
