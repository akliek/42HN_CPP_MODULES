#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				is_signed;
		const int			grade_to_sign;
		const int			grade_to_execute;
	public:
		Form(const std::string name, const int grade_to_sign, const int grade_to_execute);
		virtual ~Form();
		Form(const Form &copy);

		Form	&operator = (const Form &copy);

		const std::string			&getName(void) const;
		virtual const std::string	getTarget(void) const = 0;
		bool						getIsSigned(void) const;
		int							getGradeToSign(void) const;
		int							getGradeToExecute(void) const;
		void						beSigned(const Bureaucrat &obj);
		virtual void				execute(const Bureaucrat &obj) const = 0;

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
		class GradeToExecuteTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream	&operator << (std::ostream &out, const Form &obj);

#endif
