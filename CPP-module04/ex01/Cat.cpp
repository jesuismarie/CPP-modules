#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat's default constructor called" << std::endl;
	brain = new Brain();
}

Cat::~Cat(void)
{
	std::cout << "Cat's destructor called" << std::endl;
	delete brain;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	std::cout << "Cat's copy constructor called" << std::endl;
	brain = new Brain(*copy.brain);
}

Cat	&Cat::operator=(Cat const &copy)
{
	std::cout << "Cat's assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_type = copy._type;
		delete brain;
		brain = new Brain(*copy.brain);
	}
	return (*this);
}

Brain	*Cat::getBrain(void) const
{
	return (this->brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meoww" << std::endl;
}
