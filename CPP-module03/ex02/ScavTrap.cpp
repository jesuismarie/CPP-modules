#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap("Default ClapTrap")
{
	this->_hitPoint = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap " << this->_name << " created." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap " << this->_name << " created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy)
{
	std::cout << "ScavTrap " << this->_name << " copied." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destroyed." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "Copy assignment operator for ScavTrap called." << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	if (this->_hitPoint <= 0)
		std::cout << "Cannot switch to Gate-keeper mode because: ClapTrap " << this->_name << " is already dead." << std::endl;
	else
		std::cout << "ScavTrap from ClapTrap " << this->_name << " switched to Gate-keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy && this->_hitPoint > 0)
	{
		this->_energy--;
		std::cout << "ScavTrap " << this->_name << " attaced " << target << " causing " << this->_damage << " points of damage!" << std::endl;
	}
	if (this->_hitPoint <= 0)
		std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
	else if (!this->_energy)
		std::cout << "ScavTrap " << this->_name << " is out of energy points!" << std::endl;
}
