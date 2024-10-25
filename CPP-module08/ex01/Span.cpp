#include "Span.hpp"

Span::Span(void) {}


Span::Span(size_t n): _n(n) {}

Span::Span(const Span& copy): _arr(copy._arr), _n(copy._n) {}

Span::~Span() {}

const Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->_n = other._n;
		this->_arr = other._arr;
	}
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->_arr.size() == this->_n)
		throw std::out_of_range("Span is full");
	this->_arr.push_back(num);
}

int	Span::shortestSpan() const
{
	if (this->_arr.size() <= 1)
		throw std::out_of_range("Can't find a span");
	std::vector<int>	tmp = this->_arr;
	std::sort(tmp.begin(), tmp.end());
	int	span = tmp[1] - tmp[0];
	for (size_t i = 2; i < tmp.size(); i++)
	{
		int	t = tmp[i] - tmp[i - 1];
		span = t < span ? t : span;
	}
	return (span);
}

int	Span::longestSpan() const
{
	if (this->_arr.size() <= 1)
		throw std::out_of_range("Can't find a span");
	return (*std::max_element(this->_arr.begin(), this->_arr.end()) \
	- *std::min_element(this->_arr.begin(), this->_arr.end()));
}
