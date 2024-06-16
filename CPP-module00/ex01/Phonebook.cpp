#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->idx = 0;
	std::cout << std::endl << "Hi 👋, Welcome to PhoneBook" << std::endl << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << "Warrning: Your contacts are lost forever." << std::endl;
}

void	Phonebook::add_contact(void)
{
	std::string	str;

	str = "";
	if (this->idx > 7)
	{
		std::cout << "Warrning: Too many contacts: Overwriting the contact information!" << std::endl;
		this->idx = 0;
	}
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter the first name: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->idx].set_fname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter the last name: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->idx].set_lname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter the nickname: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->idx].set_nick(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter the phone number: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->idx].set_phone_num(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter the darkest secret: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->idx].set_secret(str);
	}
	this->idx++;
}

void	Phonebook::search_contact(void)
{
	std::string	str;

	if (!this->print_list(this->contacts))
	{
		std::cout << "The PhoneBook is empty..." << std::endl;
		return ;
	}
	str = "";
	while (!std::cin.eof())
	{
		std::cout << "Select an index: ";
		if (std::getline(std::cin, str) && str != "")
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8')
				break ;
		if (str != "")
			std::cout << "Invalid index." << std::endl;
	}
	if (!std::cin.eof())
		this->print_contact(this->contacts[str[0] - 1 - '0']);
}

void	Phonebook::print_contact(Contact contact)
{
	std::cout << "First Name: " << contact.get_fname() << std::endl;
	std::cout << "Last Name: " << contact.get_lname() << std::endl;
	std::cout << "Nickname: " << contact.get_nick() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_num() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_secret() << std::endl;
}

int	Phonebook::print_list(Contact contacts[8])
{
	int	i;
	std::string	str;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	i = -1;
	while (++i < 8 && contacts[i].get_fname().size())
	{
		str = i + 1 + '0';
		str = this->format_str(str, 10);
		std::cout << "|" << str;
		str = this->format_str(contacts[i].get_fname(), 10);
		std::cout << "|" << str;
		str = this->format_str(contacts[i].get_lname(), 10);
		std::cout << "|" << str;
		str = this->format_str(contacts[i].get_nick(), 10);
		std::cout << "|" << str;
		std::cout << "|" << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	return (i);
}

std::string	Phonebook::format_str(std::string str, unsigned long max)
{
	unsigned long	i;

	if (str.size() > max)
	{
		str.resize(max);
		str[max - 1] = '.';
	}
	i = max - str.size();
	while (i--)
		str.insert(str.begin(), ' ');
	return (str);
}