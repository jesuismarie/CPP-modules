#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Default"), _hitPoint(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): _name(name), _hitPoint(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
	std::cout << "ClapTrap " << this->_name << " copied." << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator for ClapTrap called." << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoint = other._hitPoint;
		this->_energy = other._energy;
		this->_damage = other._damage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy && this->_hitPoint > 0)
	{
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << " attaced " << target << " causing " << this->_damage << " points of damage!" << std::endl;
	}
	if (this->_hitPoint <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	else if (!this->_energy)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (static_cast<int>(amount) < 0)
	{
		std::cout << "Wrong amount" << std::endl;
		return ;
	}
	if (this->_hitPoint > 0)
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
		this->_hitPoint -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
	if (this->_hitPoint < 0)
		this->_hitPoint = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (static_cast<int>(amount) < 0)
	{
		std::cout << "Wrong amount" << std::endl;
		return ;
	}
	if (this->_hitPoint > 0 && this->_energy)
	{
		std::cout << "ClapTrap " << this->_name << " has been repaired " << amount << " points of damage!" << std::endl;
		this->_energy--;
		this->_hitPoint += amount;
	}
	if (this->_hitPoint <= 0)
		std::cout << "Cannot repair because: ClapTrap " << this->_name << " is already dead." << std::endl;
	else if (!this->_energy)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}
