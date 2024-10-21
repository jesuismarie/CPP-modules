#ifndef _PMERGEME_HPP_
# define _PMERGEME_HPP_

# include <algorithm>
# include <iostream>
# include <sstream>
# include <cstring>
# include <vector>
# include <deque>
# include <cmath>

class PmergeMe
{
	private:
		std::vector<int>	vec;
		std::deque<int>		deq;
		double				vecSortTime;
		double				deqSortTime;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		~PmergeMe();
		const PmergeMe&	operator=(const PmergeMe& other);
		bool			isValidInput(int argc, char** argv);
		void			printInfo(void);
		template <typename T>
		void			insertNum(T& a, T& b);
		template <typename T>
		void			insertionSort(T& seq);
		template <typename T>
		void			ford_johnson(T& seq);
		void			sort(int argc, char** argv);
		template <typename T>
		bool			isSorted(const T& seq);
		class EnoughArgsException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
		class InvalidArgsException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
};

template <typename T>
bool	PmergeMe::isSorted(const T& seq)
{
	for (size_t i = 1; i < seq.size(); ++i)
		if (seq[i - 1] > seq[i])
			return (false);
	return (true);
}

template <typename T>
void	PmergeMe::insertionSort(T& seq)
{
	for (size_t i = 1; i < seq.size(); i++)
	{
		int j = i;
		while (j > 0 && seq[j] < seq[j - 1])
		{
			std::swap(seq[j], seq[j - 1]);
			j--;
		}
	}
}

template <typename T>
void	PmergeMe::insertNum(T& seq, T& b)
{
	int n = 0;
	int p = 0;
	size_t start = 0;
	size_t end = 0;

	for (size_t i = 0; i < b.size();)
	{
		p++;
		n = (1 << p) - n;
		start += n;
		end = start - n;
		if (start > b.size())
			start = b.size();
		for (size_t j = start - 1; j >= end;)
		{
			typename T::iterator	pos = std::upper_bound(seq.begin(), seq.end(), b[j]);
			seq.insert(pos, b[j]);
			i++;
			if (j == 0)
				break ;
			j--;
		}
	}
}

template <typename T>
void	PmergeMe::ford_johnson(T& seq)
{
	T	a;
	T	b;

	if (seq.size() == 2 || seq.size() == 3)
	{
		insertionSort(seq);
		return ;
	}
	for (size_t i = 0; i < seq.size(); i += 2)
	{
		if (i == seq.size() - 1)
		{
			b.push_back(seq[i]);
			break ;
		}
		if (seq[i] > seq[i + 1])
			std::swap(seq[i], seq[i + 1]);
		a.push_back(seq[i + 1]);
		b.push_back(seq[i]);
	}
	this->ford_johnson(a);
	this->insertNum(a, b);
	seq = a;
}

#endif
