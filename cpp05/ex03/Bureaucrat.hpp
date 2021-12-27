#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "iostream"
# include <stdexcept>
# include "Form.hpp"

class Form;

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
		void				signForm(bool is_signed, const std::string form) const;
		void				executeForm(Form const &form);

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
