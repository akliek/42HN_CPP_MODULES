#include "Form.hpp"

Form::Form(const std::string name, const int grade_to_sign, const int grade_to_execute):
			name(name), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
	if (grade_to_sign > 150 || grade_to_execute > 150)
		throw Form::GradeTooLowException();
	else if (grade_to_sign < 1 || grade_to_execute < 1)
		throw Form::GradeTooHighException();
	this->is_signed = 0;	
}

Form::~Form()
{
}

Form	&Form::operator = (const Form &copy)
{
	this->is_signed = copy.is_signed;

	return (*this);
}

Form::Form(const Form &copy): name(copy.getName()), is_signed(copy.getIsSigned()),
			grade_to_sign(copy.getGradeToSign()), grade_to_execute(copy.getGradeToExecute())
{
	*this = copy;
}

const std::string	&Form::getName(void) const
{
	return (this->name);
}

bool				Form::getIsSigned(void) const
{
	return (this->is_signed);
}

int					Form::getGradeToSign(void) const
{
	return (this->grade_to_sign);
}

int					Form::getGradeToExecute(void) const
{
	return (this->grade_to_execute);
}

void	Form::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() < this->grade_to_sign)
	{
		this->is_signed = 1;
		obj.signForm(this->is_signed, this->name);
	}
	else
	{
		this->is_signed = 0;
		obj.signForm(this->is_signed, this->name);
	}
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Exception: grade is too low");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Exception: grade is too high");
}

const char *Form::GradeToExecuteTooLowException::what() const throw()
{
	return ("Exception: grade is too low to execute");
}

std::ostream	&operator << (std::ostream &out, const Form &obj)
{
	out << obj.getName() << " signed status - " << obj.getIsSigned()
		<< ", grade to sign - " << obj.getGradeToSign() << ", grade to execute - "
		<< obj.getGradeToExecute();
	return (out);
}
