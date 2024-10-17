#ifndef _SERIALIZE_HPP_
# define _SERIALIZE_HPP_

# include <iostream>
# include <stdint.h>

struct Data
{
	int		a;
	char	b;
};

class Serializer
{
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif
