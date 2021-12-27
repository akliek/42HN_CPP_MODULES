#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): Form("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): Form("RobotomyRequestForm", 72, 45)
{
	*this = copy;
}

RobotomyRequestForm	&RobotomyRequestForm::operator = (const RobotomyRequestForm &copy)
{
	(void)copy;

	return (*this);
}

const std::string		RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}

void	RobotomyRequestForm::execute(const Bureaucrat &obj) const
{
	if (this->getGradeToExecute() >= obj.getGrade())
	{
		if (this->getIsSigned())
		{
			std::cout << "* DRILLING NOISES *" << std::endl;
			if (std::rand() % 2)
				std::cout << this->target << " has been robotomized successfull 50% of the time" << std::endl;
			else
				std::cout << this->target << " failed" << std::endl;
		}
		else
			std::cout << this->getName() << " is not signed" << std::endl;
	}
	else
		throw Form::GradeToExecuteTooLowException();
}
