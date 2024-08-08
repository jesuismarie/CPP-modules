#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): _inventory()
{
	std::cout << "MateriaSource object created with default constructor!" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i];
	}
	std::cout << "MateriaSource object copied!" << std::endl;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
			{
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (copy._inventory[i])
				this->_inventory[i] = copy._inventory[i];
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "MateriaSource object destroyed!" << std::endl;
}

bool	MateriaSource::inLearnInventory(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == m)
			return (1);
	}
	return (0);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
	{
		std::cout << "Cannot learn invalid materia" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			if (this->inLearnInventory(m))
				this->_inventory[i] = m->clone();
			else
				this->_inventory[i] = m;
			std::cout << "Materia " << this->_inventory[i]->getType() << " learned at index " << i << std::endl;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	}
	std::cout << "Cannot create materia, " << type << " is invalid!" << std::endl;
	return (NULL);
}
