#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <iterator>
# include <vector>
# include <cmath>
# include <algorithm>

class span
{
	private:
		unsigned int		N;
		std::vector<int>	v;
	public:
		span(unsigned int N);
		~span(void);
		span(const span &copy);

		void	addNumber(int num);
		void	addNumber(unsigned int num_of_nums, int biggest_num, int lowest_num);
		int		longestSpan(void);
		int		shortestSpan(void);

		span	&operator = (const span &copy);
		class TooManyNumbers: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class NoSpan: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
