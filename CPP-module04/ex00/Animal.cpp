#include "Animal.hpp"

Animal::Animal(void): _type("Unknown")
{
	std::cout << "Animal's default constructor called with type " << this->_type << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << "Animal's default constructor called with type " << this->_type << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal's destructor called with type " << this->_type << std::endl;
}

Animal::Animal(Animal const &copy)
{
	this->_type = copy._type;
	std::cout << "Animal's copy constructor called with type " << this->_type << std::endl;
}

Animal	&Animal::operator=(Animal const &copy)
{
	std::cout << "Animal's copy assignment operator called with type " << this->_type << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

const std::string	&Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string str)
{
	this->_type = str;
}

void	Animal::makeSound(void) const
{
	std::cout << "Undefined sound" << std::endl;
}
