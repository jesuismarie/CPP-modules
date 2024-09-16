#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie*	z1 = newZombie("Pxik");
	z1->announce();
	delete z1;
	randomChump("Ando");
	{
		Zombie z2("Avocado");
		z2.announce();
	}
	return (0);
}
