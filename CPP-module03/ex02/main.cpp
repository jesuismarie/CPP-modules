#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap frag("FR4G");

	std::cout << "\nTesting attack function" << std::endl;
	frag.attack("target");

	std::cout << "\nTesting takeDamage function" << std::endl;
	frag.takeDamage(20);

	std::cout << "\nTesting beRepaired function" << std::endl;
	frag.beRepaired(50);

	std::cout << "\nCreating a second FragTrap object frag2" << std::endl;
	FragTrap frag2("FR4G2");

	std::cout << "\nTesting attack and takeDamage between frag and frag2" << std::endl;
	frag.attack("FR4G2");
	frag2.takeDamage(35);

	std::cout << "\nCreating a third FragTrap object frag3 (copy of frag2)" << std::endl;
	FragTrap frag3 = frag2;

	std::cout << "\nTesting attack and takeDamage between frag2 and frag3" << std::endl;
	frag2.attack("FR4G3");
	frag3.takeDamage(25);

	std::cout << "\nCreating a fourth FragTrap object frag4 (assigned from frag)" << std::endl;
	FragTrap frag4("FR4G4");
	frag4 = frag;

	std::cout << "\nTesting attack and takeDamage between frag and frag4" << std::endl;
	frag.attack("FR4G4");
	frag4.takeDamage(15);

	std::cout << "\nTesting special function highFivesGuys" << std::endl;
	frag.highFivesGuys();
	frag2.highFivesGuys();
	return (0);
}