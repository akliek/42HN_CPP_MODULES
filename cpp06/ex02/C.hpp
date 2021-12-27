#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class C: public Base
{
	private:
		/*private members*/
	public:
		C(void);
		~C(void);
		C(const C &copy);

		C	&operator = (const C &copy);
};

#endif
