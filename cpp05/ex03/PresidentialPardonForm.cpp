#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): Form("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form("PresidentialPardonForm", 25, 5)
{
	*this = copy;
}

PresidentialPardonForm	&PresidentialPardonForm::operator = (const PresidentialPardonForm &copy)
{
	(void)copy;

	return (*this);
}

const std::string		PresidentialPardonForm::getTarget(void) const
{
	return (this->target);
}

void	PresidentialPardonForm::execute(const Bureaucrat &obj) const
{
	if (this->getGradeToExecute() >= obj.getGrade())
	{
		if (this->getIsSigned())
			std::cout << this->target << " has been pardoned by Zaford Beeblebrox" << std::endl;
		else
			std::cout << this->getName() << " is not signed" << std::endl;	
	}
	else
		throw Form::GradeToExecuteTooLowException();	
}