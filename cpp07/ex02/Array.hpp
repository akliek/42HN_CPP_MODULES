#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	private:
		int	length;
		T	*arr;
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array &copy);
		~Array(void);

		Array	&operator = (const Array &copy);
		T		&operator [] (int idx);

		int		size(void) const;

		class WrongIndexException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

template <typename T>
Array<T>::Array(void)
{
	this->length = 0;
	this->arr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	if (n < 0)
		throw Array<T>::WrongIndexException();
	this->length = n;
	this->arr = new T[n];
}

template <typename T>
Array<T>::~Array(void)
{
	if (this->length > 0)
		delete [] this->arr;
}

template <typename T>
Array<T>::Array(const Array &copy)
{
	*this = copy;
}

template <typename T>
Array<T>	&Array<T>::operator = (const Array &copy)
{
	if (this->length > 0)
		delete [] this->arr;
	this->length = copy.length;
	this->arr = new T[this->length];
	for (int i = 0; i < this->length; i++)
		this->arr[i] = copy.arr[i];

	return (*this);
}

template <typename T>
T	&Array<T>::operator [] (int idx)
{
	if (idx >= this->length || idx < 0)
		throw Array<T>::WrongIndexException();
	return (this->arr[idx]);
}

template <typename T>
int	Array<T>::size(void) const
{
	return (this->length);
}

template <typename T>
const char *Array<T>::WrongIndexException::what() const throw()
{
	return ("Wrong index");
}

#endif
