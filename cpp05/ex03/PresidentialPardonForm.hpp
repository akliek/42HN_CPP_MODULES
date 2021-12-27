#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: virtual public Form
{
	private:
		const std::string	target;
	public:
		PresidentialPardonForm(const std::string &target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &copy);

		PresidentialPardonForm	&operator = (const PresidentialPardonForm &copy);

		const std::string	getTarget(void) const;
		void				execute(const Bureaucrat &obj) const;
};

#endif
