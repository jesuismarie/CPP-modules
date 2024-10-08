#include "Cat.hpp"

Cat::Cat(void): AAnimal("Cat")
{
	std::cout << "Cat's default constructor called" << std::endl;
	brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat's destructor called" << std::endl;
	delete brain;
}

Cat::Cat(const Cat& copy): AAnimal(copy)
{
	std::cout << "Cat's copy constructor called" << std::endl;
	brain = new Brain(*copy.brain);
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat's copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

Brain*	Cat::getBrain(void) const
{
	return (this->brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meoww" << std::endl;
}
