#include "RPN.hpp"

int	main(int argc, char** argv)
{
	if (argc == 2)
	{
		try
		{
			RPN	rpn;
			std::string	expr = argv[1];
			std::cout << rpn.calculate(expr) << std::endl;
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl; 
		}
	}
	else
		std::cout << "Error: usage: ./RPN <expression>" << std::endl;
	return (0);
}
