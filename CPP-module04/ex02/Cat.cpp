#include "Cat.hpp"

Cat::Cat(void): AAnimal("Cat")
{
	std::cout << "Cat's default constructor called" << std::endl;
	brain = new Brain();
}

Cat::~Cat(void)
{
	std::cout << "Cat's destructor called" << std::endl;
	delete brain;
}

Cat::Cat(Cat const &copy): AAnimal(copy)
{
	std::cout << "Cat's copy constructor called" << std::endl;
	brain = new Brain(*copy.brain);
}

Cat	&Cat::operator=(Cat const &copy)
{
	std::cout << "Cat's assignment operator called" << std::endl;
	if (this != &copy)
	{
		AAnimal::operator=(copy);
		delete brain;
		brain = new Brain(*copy.brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meoww" << std::endl;
}
