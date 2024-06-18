#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	ph_b;
	std::string	line;

	std::cout << "\e[1;32m*** Command List ***\e[0m" << std::endl;
	std::cout << "ADD:\tsave a new contact." << std::endl;
	std::cout << "SEARCH:\tdisplay a specific contact." << std::endl;
	std::cout << "EXIT:\texit program." << std::endl << std::endl;
	while (1)
	{
		std::cout << "\e[0;32mEnter a command 🥑> \e[0m";
		std::getline(std::cin, line);
		if (line == "ADD")
			ph_b.add_contact();
		else if (line == "SEARCH")
			ph_b.search_contact();
		else if (line == "EXIT")
			return (0);
		else if (!std::cin.eof())
			std::cout << "\e[0;31mError: Command not found\e[0m" << std::endl;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}