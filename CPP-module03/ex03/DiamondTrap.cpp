#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	ClapTrap::_name = "default_clap_name";
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name): ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy): ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	this->_name = copy._name;
	std::cout << "DiamondTrap " << this->_name << " copied." << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &copy)
{
	std::cout << "Copy assignment operator for DiamondTrap called." << std::endl;
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hitPoint = copy._hitPoint;
		this->_energy = copy._energy;
		this->_damage = copy._damage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
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

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}
