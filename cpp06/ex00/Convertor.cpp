#include "Convertor.hpp"

void	Convertor::parse(void)
{
	int	i;

	i = 0;
	if (!this->input.compare("nan") || !this->input.compare("nanf"))
		this->type = NAN;
	else if (!this->input.compare("+inf") || !this->input.compare("+inff")
		|| !this->input.compare("inf") || !this->input.compare("inff"))
		this->type = PLUS_INF;
	else if (!this->input.compare("-inf") || !this->input.compare("-inff"))
		this->type = MINUS_INF;
	else if (std::isalpha(this->input[0]) && !this->input[1])
		this->type = CHAR;
	else
	{
		if (this->input[i] == '-')
			i++;
		while (this->input[i])
		{
			if (std::isdigit(this->input[i]))
			{
				if (this->type != DOUBLE && this->type != FLOAT)
					this->type = INT;
			}
			else if (this->input[i] == 'f' && !this->input[i + 1])	
				this->type = FLOAT;
			else if (this->input[i] == '.' && (std::isdigit(this->input[i + 1]) || !this->input[i + 1]) && !this->dot)
			{
				this->dot = 1;
				this->type = DOUBLE;
			}
			else if (this->input[i] == '.' && this->input[i] == 'f' && !this->input[i + 1] && this->dot++ == 1)
			{
				this->dot = 1;
				this->type = FLOAT;
			}
			else
				throw Convertor::WrongInput();
			i++;
		}
	}
}


void	Convertor::convertFromChar(void)
{
	this->i = static_cast<int>(this->c);
	this->f = static_cast<float>(this->c);
	this->d = static_cast<double>(this->c);
}

void	Convertor::convertFromInt(void)
{
	this->c = static_cast<char>(this->i);
	this->f = static_cast<float>(this->i);
	this->d = static_cast<double>(this->i);
}

void	Convertor::convertFromFloat(void)
{
	this->c = static_cast<char>(this->f);
	this->i = static_cast<int>(this->f);
	this->d = static_cast<double>(this->f);
}

void	Convertor::convertFromDouble(void)
{
	this->c = static_cast<char>(this->d);
	this->i = static_cast<int>(this->d);
	this->f = static_cast<float>(this->d);
}

Convertor::Convertor(std::string input): dot(0), input(input)
{
	this->parse();
	if (this->type == INT)
	{
		this->i = std::stod(input);
		this->convertFromInt();
	}
	else if (this->type == CHAR)
	{
		this->c = this->input[0];
		this->convertFromChar();
	}
	else if (this->type == FLOAT)
	{
		this->f = std::stod(this->input);
		this->convertFromFloat();
	}
	else if (this->type == DOUBLE)
	{
		this->d = std::stod(this->input);
		this->convertFromDouble();
	}
}

char	Convertor::getChar(void) const
{
	return (this->c);
}

int	Convertor::getInt(void) const
{
	return (this->i);
}

float	Convertor::getFloat(void) const
{
	return (this->f);
}

double	Convertor::getDouble(void) const
{
	return (this->d);
}

t_type	Convertor::getType(void) const
{
	return (this->type);
}

std::string	Convertor::getInput(void) const
{
	return (this->input);
}

Convertor::~Convertor(void)
{
}

Convertor	&Convertor::operator = (const Convertor &copy)
{
	this->i = copy.i;
	this->c = copy.c;
	this->f = copy.f;
	this->d = copy.d;
	this->type = copy.type;
	this->input = copy.input;

	return (*this);
}

Convertor::Convertor(const Convertor &copy)
{
	*this = copy;
}

const char *Convertor::WrongInput::what() const throw()
{
	return ("Exception: wrong input");
}

std::ostream	&operator << (std::ostream &out, const Convertor &obj)
{
	if (obj.getType() == NAN)
		out << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan";
	else if (obj.getType() == PLUS_INF)
		out << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf";
	else if (obj.getType() == MINUS_INF)
		out << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf";
	else
	{	
		out << "char: " << obj.getChar() << std::endl;
		out << "int: " << obj.getInt() << std::endl;	
		if (obj.getType() == CHAR || obj.getType() == INT || obj.getFloat() - obj.getInt() == 0)
		{
			out << "float: " << obj.getFloat() << ".0f" << std::endl;
			out << "double: " << obj.getDouble() << ".0";
		}
		else
		{
			out << "float: " << obj.getFloat() << "f" << std::endl;
			out << "double: " << obj.getDouble();
		}
	}
	return (out);
}
