#ifndef _SPAN_HPP_
# define _SPAN_HPP_

# include <algorithm>
# include <iostream>
# include <vector>

class Span
{
	private:
		std::vector<int>	_arr;
		size_t				_n;
		Span(void);
	public:
		Span(size_t n);
		Span(const Span& copy);
		~Span();
		const Span&	operator=(const Span& other);
		void		addNumber(int num);
		template <typename it>
		void		addNumber(it begin, it end);
		int			shortestSpan() const;
		int			longestSpan() const;
};

template <typename it>
void	Span::addNumber(it begin, it end)
{
	for (; begin < end; ++begin)
		addNumber(*begin);
}

#endif
