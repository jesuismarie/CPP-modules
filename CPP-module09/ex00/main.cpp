#include "BitcoinExchange.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << "ERROR: Cannot read the file." << std::endl;
		return 1;
	}

	try {
		BitcoinExchange	ob;
		ob.initDatabase("data.csv");
		ob.exchangePrintRate(argv[1]);
	}
	catch (std::exception& e)
	{
		std::cout << "BitcoinExchange: " << e.what() << std::endl; 
	}
	return (0);
}
