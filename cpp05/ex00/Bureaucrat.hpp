#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "iostream"
# include <stdexcept>

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat(const std::string name, unsigned int grade);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);

		Bureaucrat	&operator = (const Bureaucrat &copy);

		const std::string	&getName(void) const;
		int					getGrade(void) const;
		void				incrementGrade(int i);
		void				decrementGrade(int i);

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream	&operator << (std::ostream &out, const Bureaucrat &obj);

#endif
