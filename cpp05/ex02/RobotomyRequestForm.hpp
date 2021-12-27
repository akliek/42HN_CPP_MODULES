#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Form.hpp"

class RobotomyRequestForm: virtual public Form
{
	private:
		const std::string	target;
	public:
		RobotomyRequestForm(const std::string &target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &copy);

		RobotomyRequestForm	&operator = (const RobotomyRequestForm &copy);

		const std::string	getTarget(void) const;
		void				execute(const Bureaucrat &obj) const;
};

#endif
