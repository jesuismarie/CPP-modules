#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog's default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog's destructor called" << std::endl;
}

Dog::Dog(const Dog& copy): Animal(copy)
{
	std::cout << "Dog's copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog's copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
