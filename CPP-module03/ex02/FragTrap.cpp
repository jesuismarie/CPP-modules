#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("Default ClapTrap")
{
	this->_hitPoint = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap " << this->_name << " created." << std::endl;
}

FragTrap::FragTrap(std::string const &name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap " << this->_name << " created." << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy)
{
	std::cout << "FragTrap " << this->_name << " copied." << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "Copy assignment operator for FragTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " destroyed." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hitPoint <= 0)
		std::cout << "Cannot high five because: ClapTrap " << this->_name << " is already dead." << std::endl;
	else
		std::cout << "FragTrap from ClapTrap " << this->_name << " high five!." << std::endl;
}
