#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("unknown")
{
	std::cout << "WrongAnimal's default constructor called with type " << this->_type << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	std::cout << "WrongAnimal's default constructor called with type " << this->_type << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal's destructor called with type " << this->_type << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal's copy constructor called with type " << this->_type << std::endl;
	*this = copy;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal's  copy assignment operator called with type " << this->_type << std::endl;
	if (this != &copy)
		*this = copy;
	return (*this);
}

const	std::string	&WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string str)
{
	this->_type = str;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Undefined sound" << std::endl;
}
