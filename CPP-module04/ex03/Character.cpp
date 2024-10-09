#include "Character.hpp"

Character::Character(void): _name("Default"), _inventory()
{
	std::cout << "Character object created with default constructor!" << std::endl;
}

Character::Character(const std::string& name): _name(name), _inventory()
{
	std::cout << "Character object " << this->_name << " created!" << std::endl;
}

Character::Character(const Character& copy)
{
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i]->clone();
	}
	std::cout << "Character object copied!" << std::endl;
}

Character &Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->_name = other._name;
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
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Character object destroyed!" << std::endl;
}

const std::string&	Character::getName(void) const
{
	return (this->_name);
}

void	Character::setName(std::string name)
{
	this->_name = name;
}

bool		Character::inInventory(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == m)
			return (1);
	}
	return (0);
}

void	Character::equip(AMateria* m)
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
			if (this->inInventory(m))
				this->_inventory[i] = m->clone();
			else
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
		std::cout << "Unequipped " << this->_inventory[idx]->getType() << " from inventory" << std::endl;
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
		std::cout << "Materia doesn't exist" << std::endl;
	else
	{
		std::cout << "In index " << idx << " ";
		this->_inventory[idx]->use(target);
	}
}
