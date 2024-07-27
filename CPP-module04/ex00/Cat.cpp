#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat's default constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat's destructor called" << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	std::cout << "Cat's copy constructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &copy)
{
	std::cout << "Cat's assignment operator called" << std::endl;
	Animal::operator=(copy);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meoww" << std::endl;
}
