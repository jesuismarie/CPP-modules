#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	ClapTrap::_name = "default_clap_name";
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy): ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	this->_name = copy._name;
	std::cout << "DiamondTrap " << this->_name << " copied." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "Copy assignment operator for DiamondTrap called." << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoint = other._hitPoint;
		this->_energy = other._energy;
		this->_damage = other._damage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " destroyed." << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	if (this->_hitPoint <= 0)
		std::cout << "Cannot run whoAmI because: DiamondTrap " << this->_name << " is already dead." << std::endl;
	else
	{
		std::cout << "DiamondTrap name: " << this->_name << "." << std::endl;
		std::cout << "ClapTrap name: " << ClapTrap::_name << "." << std::endl;
	}
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
