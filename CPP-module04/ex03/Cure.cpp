#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	std::cout << "Cure object created!" << std::endl;
}

Cure::Cure(Cure const &copy): AMateria(copy)
{
	std::cout << "Cure object copied!" << std::endl;
}

Cure	&Cure::operator=(Cure const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "Cure assignment operator called!" << std::endl;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure object destroyed!" << std::endl;
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
