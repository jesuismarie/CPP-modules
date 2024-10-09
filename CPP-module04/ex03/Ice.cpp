#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	std::cout << "Ice object created!" << std::endl;
}

Ice::Ice(const Ice& copy): AMateria(copy)
{
	std::cout << "Ice object copied!" << std::endl;
}

Ice&	Ice::operator=(const Ice& other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "Ice assignment operator called!" << std::endl;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice object destroyed!" << std::endl;
}

AMateria*	Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
