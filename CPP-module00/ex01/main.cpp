#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	ph_b;
	std::string		line;

	std::cout << "Command List" << std::endl;
	std::cout << "\tADD: save a new contact" << std::endl;
	std::cout << "\tSEARCH: display a specific contact" << std::endl;
	std::cout << "\tEXIT" << std::endl << std::endl;
	while (1)
	{
		std::cout << "PB: Enter a command > ";
		std::getline(std::cin, line);
		if (line == "ADD")
			ph_b.add_contact();
		if (line == "SEARCH")
			ph_b.search_contact();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}