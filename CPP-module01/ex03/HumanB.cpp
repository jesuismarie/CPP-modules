#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void) const
{
	if (weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon to attack." << std::endl;
}

void	HumanB::setWeapon(Weapon &type)
{
	this->weapon = &type;
}