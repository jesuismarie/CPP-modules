#include "easyfind.hpp"
#include <vector>

int	main(void)
{
	std::vector<int>	vec;

	vec.push_back(65);
	vec.push_back(8479);
	vec.push_back(12);
	vec.push_back (84);
	try
	{
		easyfind(vec, 34);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		easyfind(vec, 84);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
