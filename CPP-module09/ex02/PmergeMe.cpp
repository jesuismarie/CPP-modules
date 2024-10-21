#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
	*this = copy;
}

const PmergeMe&	PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

const char*	PmergeMe::EnoughArgsException::what() const throw()
{
	return ("ERROR: Wrong argument count.");
}

const char*	PmergeMe::InvalidArgsException::what() const throw()
{
	return ("ERROR: Invalid argument.");
}

bool	PmergeMe::isValidInput(int argc, char** argv)
{
	if (argc < 3)
		throw EnoughArgsException();
	for (int i = 1; i < argc; i++)
	{
		for (size_t j = 0; j < std::strlen(argv[i]); j++)
		{
			if (argv[i][j] == ' ')
				continue ;
			if (!isdigit(argv[i][j]))
				return (false);
		}
	}
	return (true);
}

void	PmergeMe::printInfo(void)
{
	std::cout << "After: ";
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << this->vec.size() \
		<< " elements with std::vector : " << this->vecSortTime << std::endl;
	std::cout << "Time to process a range of " << this->deq.size() \
		<< " elements with std::deque : " << this->deqSortTime << std::endl;
}

void	PmergeMe::sort(int argc, char** argv)
{
	int	num;

	if (!isValidInput(argc, argv))
		throw InvalidArgsException();
	for (int i = 1; i < argc; i++)
	{
		std::stringstream(argv[i]) >> num;
		vec.push_back(num);
		deq.push_back(num);
	}
	if (isSorted(this->vec))
	{
		std::cout << "Sequence is already sorted :D" << std::endl;
		return ;
	}
	std::cout << "Before: ";
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
	clock_t	vecStart = clock();
	this->ford_johnson(this->vec);
	clock_t	vecEnd = clock();
	this->vecSortTime = static_cast<double>(vecEnd - vecStart) / CLOCKS_PER_SEC * 1000.0;
	clock_t	deqStart = clock();
	this->ford_johnson(this->deq);
	clock_t	deqEnd = clock();
	this->deqSortTime = static_cast<double>(deqEnd - deqStart) / CLOCKS_PER_SEC * 1000.0;
	this->printInfo();
}
