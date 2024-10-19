#include "Classes.hpp"

Base::~Base() {}

Base*	generate(void)
{
	srand(std::time(NULL));
	int	i = 1 + rand() % 3;

	switch (i)
	{
		case 1:
			return (new A);
		case 2:
			return (new B);
		case 3:
			return (new C);
	}
	return (NULL);
}

void	identify(Base* p)
{
	std::string	types[4] = {"A", "B", "C", "Base"};
	Base*		cast[4] = {
		dynamic_cast<A*>(p),
		dynamic_cast<B*>(p),
		dynamic_cast<C*>(p),
		dynamic_cast<Base*>(p)
	};
	int	i = 0;
	while (i < 4 && !cast[i])
		i++;
	if (cast[i])
		std::cout << "Type of pointer is " << types[i] << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A	objA = dynamic_cast<A&>(p);
		std::cout << "Type of pointer is A" << std::endl;
		(void)objA;
	}
	catch(...)
	{}
	try
	{
		B	objB = dynamic_cast<B&>(p);
		std::cout << "Type of pointer is B" << std::endl;
		(void)objB;
	}
	catch(...)
	{}
	try
	{
		C	objC = dynamic_cast<C&>(p);
		std::cout << "Type of pointer is C" << std::endl;
		(void)objC;
	}
	catch(...)
	{}
}
