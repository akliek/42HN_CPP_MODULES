#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	name;
		bool				is_signed;
		const int			grade_to_sign;
		const int			grade_to_execute;
	public:
		Form(const std::string name, const int grade_to_sign, const int grade_to_execute);
		~Form();
		Form(const Form &copy);

		Form	&operator = (const Form &copy);

		const std::string	&getName(void) const;
		bool				getIsSigned(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;
		void				beSigned(const Bureaucrat &obj);

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Exception: grade is too low");
				}
		};
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Exception: grade is too high");
				}
		};
};

std::ostream	&operator << (std::ostream &out, const Form &obj);

#endif
