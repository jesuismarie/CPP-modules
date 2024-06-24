#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address of the str " << &str << std::endl;
	std::cout << "The memory address of the stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address of the stringREF: " << &stringREF << std::endl;
	std::cout << "The value of the str " << str << std::endl;
	std::cout << "The value of the stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value of the stringREF: " << stringREF << std::endl;
	return (0);
}