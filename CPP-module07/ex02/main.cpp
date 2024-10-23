#include <iostream>
#include <Array.hpp>
#include <cstdlib>

#define MAX_VAL 750
int	main(int, char**)
{
	// const Array<int>	arr(5);
	// for (size_t i = 0; i < arr.size(); ++i)
	// 	std::cout << arr[i] << " ";
	// std::cout << std::endl;
	// Array<int>	copy;
	// copy = arr;
	// for (size_t i = 0; i < copy.size(); ++i)
	// 	std::cout << copy[i] << " ";
	// std::cout << std::endl << "-----------" << std::endl;
	// for (size_t i = 0; i < copy.size(); ++i)
	// 	copy[i] = i;
	// for (size_t i = 0; i < copy.size(); ++i)
	// 	std::cout << copy[i] << " ";
	// std::cout << std::endl;
	// try
	// {
	// 	copy[5] = 10;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	Array<int>	numbers(MAX_VAL);
	int*		mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	{
		Array<int>	tmp = numbers;
		Array<int>	test(tmp);
	}
	std::cout << "Size: " << numbers.size() << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return (1);
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete[] mirror;
	return (0);
}
