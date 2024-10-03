#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain's default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain's destructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain's copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->idea[i] = copy.idea[i];
}

Brain&	Brain::operator=(const Brain& other)
{
	std::cout << "Brain's copy assignment operator called" << std::endl;
	if (this != &other)
		for (int i = 0; i < 100; ++i)
			this->idea[i] = other.idea[i];
	return (*this);
}

const std::string&	Brain::getIdea(int index) const
{
	return (*(this->idea + index));
}

void	Brain::setIdea(std::string idea, int index)
{
	this->idea[index] = idea;
}
