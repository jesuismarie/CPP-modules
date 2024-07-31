#include "AMateria.hpp"

AMateria::AMateria(void): _type("Unidentified")
{
}

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << "AMatreia object created!" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	this->_type = copy._type;
	std::cout << "AMatreia object copied!" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMatreia object destroyed!" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "AMatreia assignment operator called!" << std::endl;
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "* " << target.getName() << " has undefined materia *" << std::endl;
}
