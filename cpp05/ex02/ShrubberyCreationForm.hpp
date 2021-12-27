#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"
# include "fstream"

class ShrubberyCreationForm: virtual public Form
{
	private:	
		const std::string	target;
	public:
		ShrubberyCreationForm(const std::string &target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);

		ShrubberyCreationForm	&operator = (const ShrubberyCreationForm &copy);

		const std::string		getTarget(void) const;
		void					execute(const Bureaucrat &obj) const;
};

#endif
