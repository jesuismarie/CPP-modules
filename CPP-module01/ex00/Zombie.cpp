#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie " << this->name << " created!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " destroyed!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/*********************************** GETTERS ***********************************/

const std::string	&Zombie::get_name(void) const
{
	return (this->name);
}

/********************************** SETTERS ***********************************/

void	Zombie::set_name(std::string str)
{
	this->name = str;
}