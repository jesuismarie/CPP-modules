#include "easyfind.hpp"

template <typename T>
void	easyfind(T& container, int occure)
{
	typename T::iterator	it = std::find(container.begin(), container.end(), occure);
	if (it == container.end())
		throw std::out_of_range("Not found");
	std::cout << "The first occurence was found at index " << std::distance(container.begin(), it) << "!" << std::endl;
}
