#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade): name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (garde < 1)
		throw Bureaucrat::GradeTooHighException();	
	this->grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &copy)
{
	this->grade = copy.grade;

	return (*this);
}

const std::string	&Bureaucrat::getName(void) const
{
	return (this->name);
}

int		Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void				Bureaucrat::incrementGrade(int i)
{
	int new_grade = this->grade - i;

	if (new_grade < 1)
		throw Bureaucrat::GradeTooHighException();

	this->grade -= i;
}

void				Bureaucrat::decrementGrade(int i)
{
	int new_grade = this->grade + i;

	if (new_grade > 150)
		throw Bureaucrat::GradeTooLowException();

	this->grade += i;
}

void				Bureaucrat::signForm(bool is_signed, const std::string form) const
{
	if (is_signed)
		std::cout << this->name << " signs " << form << std::endl;
	else
		std::cout << this->name << " cannot sign " << form << " because grade is too low" << std::endl;		
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: grade is too low");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception: grade is too high");
}

std::ostream	&operator << (std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade(); 
	return (out);
}
