#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

# include <iostream>

typedef	enum e_type
{
	INT,
	NAN,
	CHAR,
	FLOAT,
	DOUBLE,
	PLUS_INF,
	MINUS_INF
}			t_type;

class Convertor
{
	private:
		int		i;
		char	c;
		float	f;
		double	d;

		int		dot;

		t_type	type;

		std::string	input;

		void	parse(void);

		void	convertFromInt(void);
		void	convertFromChar(void);
		void	convertFromFloat(void);
		void	convertFromDouble(void);
	public:
		Convertor(std::string input);
		~Convertor(void);
		Convertor(const Convertor &copy);

		char		getChar(void) const;
		int			getInt(void) const;
		float		getFloat(void) const;
		double		getDouble(void) const;
		t_type		getType(void) const;
		std::string	getInput(void) const;

		Convertor	&operator = (const Convertor &copy);

		class WrongInput: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream	&operator << (std::ostream &out, const Convertor &obj);

#endif
