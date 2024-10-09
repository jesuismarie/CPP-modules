#include "AMateria.hpp"

AMateria::AMateria(void): _type("Unidentified")
{
}

AMateria::AMateria(const std::string& type): _type(type)
{
	std::cout << "AMatreia object created!" << std::endl;
}

AMateria::AMateria(const AMateria& copy)
{
	this->_type = copy._type;
	std::cout << "AMatreia object copied!" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMatreia object destroyed!" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "AMatreia copy assignment operator called!" << std::endl;
	return (*this);
}

const std::string&	AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* " << target.getName() << " has undefined materia *" << std::endl;
}
