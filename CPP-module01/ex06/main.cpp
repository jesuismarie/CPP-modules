#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << GREEN << "Two arguments required: <level>" << RESET << std::endl;
		return (0);
	}
	harl.complain(argv[1]);
	return (0);
}