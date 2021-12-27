#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern	&Intern::operator = (const Intern &copy)
{
	(void)copy;

	return (*this);
}

Form	*Intern::makeForm(const std::string form_name, const std::string form_target)
{
	int	i;

	i = 0;
	t_form	form[] = {{"shrubbery creation", new ShrubberyCreationForm(form_target)},
						{"robotomy request", new RobotomyRequestForm(form_name)},
						{"presidential pardon", new PresidentialPardonForm(form_target)},
						{"", NULL}};					
	while (form_name.compare(form[i].name) && i < 3)
		i++;
	for (int j = 0; j < 3; j++)
	{
		if (j == i)
		{
			std::cout << "Intern creates " << form_name << std::endl;
			continue ;
		}
		delete form[j].form;
	}
	if (i == 3)
		std::cout << "Intern can't create form with name <" << form_name << ">" <<std::endl; 
	return (form[i].form);
}
