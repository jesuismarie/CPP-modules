#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog's default constructor called" << std::endl;
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog's destructor called" << std::endl;
	delete brain;
}

Dog::Dog(const Dog& copy): Animal(copy)
{
	std::cout << "Dog's copy constructor called" << std::endl;
	brain = new Brain(*copy.brain);
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog's copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

Brain*	Dog::getBrain(void) const
{
	return (this->brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
