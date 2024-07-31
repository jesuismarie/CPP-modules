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
	std::cout << "Brain's copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->idea[i] = copy.idea[i];
}

Brain	&Brain::operator=(Brain const &copy)
{
	std::cout << "Brain's copy assignment operator called" << std::endl;
	if (this != &copy)
		for (int i = 0; i < 100; ++i)
			this->idea[i] = copy.idea[i];
	return (*this);
}

const std::string	&Brain::getIdea(int index) const
{
	return (*(this->idea + index));
}

void	Brain::setIdea(std::string idea, int index)
{
	this->idea[index] = idea;
}
