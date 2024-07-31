#include "AAnimal.hpp"

AAnimal::AAnimal(void): _type("Unknown")
{
	std::cout << "AAnimal's default constructor called with type " << this->_type << std::endl;
}

AAnimal::AAnimal(std::string type): _type(type)
{
	std::cout << "AAnimal's default constructor called with type " << this->_type << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal's destructor called with type " << this->_type << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
	this->_type = copy._type;
	std::cout << "AAnimal's copy constructor called with type " << this->_type << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "Animal's copy assignment operator called with type " << this->_type << std::endl;
	return (*this);
}

const std::string	&AAnimal::getType(void) const
{
	return (this->_type);
} 

void	AAnimal::setType(std::string str)
{
	this->_type = str;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Undefined sound" << std::endl;
}
