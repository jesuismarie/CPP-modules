#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << ORANGE << "[ DEBUG ]" << RESET << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. ";
	std::cout << "I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << ORANGE << "[ INFO ]" << RESET << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << ORANGE << "[ WARNING ]" << RESET << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << ORANGE << "[ ERROR ]" << RESET << std::endl;
	std::cout << "This is unacceptable! ";
	std::cout << "I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int			i;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*fptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	i = 0;
	while (i < 4 && level != levels[i])
		i++;
	switch (i)
	{
		case (0):
			(this->*fptr[0])();
			// Fall through
		case (1):
			(this->*fptr[1])();
			// Fall through
		case (2):
			(this->*fptr[2])();
			// Fall through
		case (3):
			(this->*fptr[3])();
			break ;
		default:
			std::cout << ORANGE << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
	}
}
