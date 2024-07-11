#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie* horde1 = zombieHorde(5, "Melanya");
	if (horde1)
	{
		for (int i = 0; i < 5; ++i)
			horde1[i].announce();
		delete[] horde1;
	}
	Zombie* horde2 = zombieHorde(3, "Bob");
	if (horde2)
	{
		for (int i = 0; i < 3; ++i)
			horde2[i].announce();
		delete[] horde2;
	}
	return (0);
}
