#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog's default constructor called" << std::endl;
	brain = new Brain();
}

Dog::~Dog(void)
{
	std::cout << "Dog's destructor called" << std::endl;
	delete brain;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	std::cout << "Dog's copy constructor called" << std::endl;
	brain = new Brain(*copy.brain);
}

Dog	&Dog::operator=(Dog const &copy)
{
	std::cout << "Dog's assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_type = copy._type;
		delete brain;
		brain = new Brain(*copy.brain);
	}
	return (*this);
}

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
