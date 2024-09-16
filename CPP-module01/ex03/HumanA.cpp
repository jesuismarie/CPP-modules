#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type): name(name), weapon(type)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon type)
{
	this->weapon = type;
}
