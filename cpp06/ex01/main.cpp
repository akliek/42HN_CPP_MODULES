#include <iostream>

typedef	struct s_Data
{
	int		data;
}			Data;

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data		data;
	Data		*xD;
	uintptr_t	raw;

	data.data = 42;
	raw = serialize(&data);
	xD = deserialize(raw);

	std::cout << xD->data << std::endl;

	return (0);
}
