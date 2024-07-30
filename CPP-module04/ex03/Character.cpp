#include "Character.hpp"

Character::Character(void): _name("Default"), _inventory()
{
	std::cout << "Character object created with default constructor!" << std::endl;
}

Character::Character(std::string const &name): _name(name), _inventory()
{
	std::cout << "Character object " << this->_name << " created!" << std::endl;
}

Character::Character(Character const &copy): ICharacter(copy)
{
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i]->clone();
	}
	std::cout << "Character object copied!" << std::endl;
}

Character &Character::operator=(const Character &copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
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
				this->_inventory[i] = copy._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Character object destroyed!" << std::endl;
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::setName(std::string const &name)
{
	this->_name = name;
}

void	Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout << "Cannot equip invalid materia" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << "Materia " << m->getType() << " equipped to " << this->_name << "'s inventory at index " << i << std::endl;
			return ;
		}
	}
	std::cout << "Cannot equip materia, " << this->_name << "'s inventory is full!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
		std::cout << "Materia doesn't exist" << std::endl;
	else
	{
		this->_inventory[idx] = NULL;
		std::cout << "Unequiped " << this->_inventory[idx]->getType() << "from inventory" << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
		std::cout << "Material doesn't exist" << std::endl;
	else
		this->_inventory[idx]->use(target);
}
