#include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	try
	{
		PmergeMe	seq;
		seq.sort(argc, argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
