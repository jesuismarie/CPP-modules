#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	std::cout << "Cure object created!" << std::endl;
}

Cure::Cure(const Cure& copy): AMateria(copy)
{
	std::cout << "Cure object copied!" << std::endl;
}

Cure&	Cure::operator=(const Cure& other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "Cure copy assignment operator called!" << std::endl;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure object destroyed!" << std::endl;
}

AMateria*	Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
