#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat's default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat's destructor called" << std::endl;
}

Cat::Cat(const Cat& copy): Animal(copy)
{
	std::cout << "Cat's copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat's copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meoww" << std::endl;
}
