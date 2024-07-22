#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scav("SC4V");

	std::cout << "\nTesting attack function" << std::endl;
	scav.attack("target");

	std::cout << "\nTesting takeDamage function" << std::endl;
	scav.takeDamage(20);

	std::cout << "\nTesting beRepaired function" << std::endl;
	scav.beRepaired(50);

	std::cout << "\nCreating a second ScavTrap object scav2" << std::endl;
	ScavTrap scav2("SC4V2");

	std::cout << "\nTesting attack and takeDamage between scav and scav2" << std::endl;
	scav.attack("SC4V2");
	scav2.takeDamage(15);

	std::cout << "\nCreating a third ScavTrap object scav3 (copy of scav2)" << std::endl;
	ScavTrap scav3 = scav2;

	std::cout << "\nTesting attack and takeDamage between scav2 and scav3" << std::endl;
	scav2.attack("SC4V3");
	scav3.takeDamage(30);

	std::cout << "\nCreating a fourth ScavTrap object scav4 (assigned from scav)" << std::endl;
	ScavTrap scav4("SC4V4");
	scav4 = scav;

	std::cout << "\nTesting attack and takeDamage between scav and scav4" << std::endl;
	scav.attack("SC4V4");
	scav4.takeDamage(10);

	std::cout << "\nTesting special function guardGate" << std::endl;
	scav.guardGate();
	scav2.guardGate();
	return (0);
}
