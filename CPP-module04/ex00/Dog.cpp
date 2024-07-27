#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog's default constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog's destructor called" << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	std::cout << "Dog's copy constructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &copy)
{
	std::cout << "Dog's assignment operator called" << std::endl;
	Animal::operator=(copy);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
