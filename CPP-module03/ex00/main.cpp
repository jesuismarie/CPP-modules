#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("CL4P");

	std::cout << "\nTesting attack function" << std::endl;
	clap.attack("target");

	std::cout << "\nTesting takeDamage function" << std::endl;
	clap.takeDamage(20);

	std::cout << "\nTesting beRepaired function" << std::endl;
	clap.beRepaired(50);

	std::cout << "\nCreating a second ClapTrap object clap2" << std::endl;
	ClapTrap clap2("CL4P2");

	std::cout << "\nTesting attack and takeDamage between clap and clap2" << std::endl;
	clap.attack("CL4P2");
	clap2.takeDamage(20);

	std::cout << "\nCreating a third ClapTrap object clap3 (copy of clap2)" << std::endl;
	ClapTrap clap3 = clap2;

	std::cout << "\nTesting attack and takeDamage between clap2 and clap3" << std::endl;
	clap2.attack("CL4P3");
	clap3.takeDamage(8);

	std::cout << "\nCreating a fourth ClapTrap object clap4 (assigned from clap)" << std::endl;
	ClapTrap clap4("CL4P4");
	clap4 = clap;

	std::cout << "\nTesting attack and takeDamage between clap and clap4" << std::endl;
	clap.attack("CL4P4");
	clap4.takeDamage(5);
	return (0);
}
