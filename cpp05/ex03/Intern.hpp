#ifndef INTERN_HPP
# define INTERN_HPP

# include "iostream"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		typedef struct s_form
		{
			std::string name;
			Form		*form;
		}			t_form;
		
	public:
		Intern(void);
		~Intern();
		Intern(const Intern &copy);

		Intern	&operator = (const Intern &copy);

		Form	*makeForm(const std::string form_name, const std::string form_target);
};

#endif
