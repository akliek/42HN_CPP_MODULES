#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): Form("ShrubberyCreationForm", 145, 137)
{
	*this = copy;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator = (const ShrubberyCreationForm &copy)
{
	(void)copy;

	return (*this);
}

const std::string		ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &obj) const
{
	std::string		file;
	std::ofstream	fout;

	if (this->getGradeToExecute() >= obj.getGrade())
	{
		if (this->getIsSigned())
		{
			file = this->target + "_shrubbery";
			fout.open(file);

			fout << "        *                    *                    *        " << std::endl;
			fout << "       ***                  ***                  ***       " << std::endl;
			fout << "      *****                *****                *****      " << std::endl;
			fout << "     *******              *******              *******     " << std::endl;
			fout << "    *********            *********            *********    " << std::endl;
			fout << "   ***********          ***********          ***********   " << std::endl;
			fout << "  *************        *************        *************  " << std::endl;
			fout << " ***************      ***************      *************** " << std::endl;
			fout << "*****************    *****************    *****************" << std::endl;
			fout << "       ###                  ###                   ###      " << std::endl;

			fout.close();
		}
		else
			std::cout << this->getName() << " is not signed" << std::endl;
	}
	else
		throw Form::GradeToExecuteTooLowException();
}
