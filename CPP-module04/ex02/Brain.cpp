#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain's default constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain's destructor called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain's copy constructor called with type " << std::endl;
	*this = copy;
}

Brain	&Brain::operator=(Brain const &copy)
{
	std::cout << "Brain's  copy assignment operator called with type " << std::endl;
	if (this != &copy)
		for (int i = 0; i < 100; ++i)
			this->idea[i] = copy.idea[i];
	return (*this);
}

std::string	Brain::getIdea(int index) const
{
	return (*(this->idea + index));
}

void	Brain::setIdea(std::string idea, int index)
{
	this->idea[index] = idea;
}
