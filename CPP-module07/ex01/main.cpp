#include "iter.hpp"
#include <vector>

// template <typename T>
// void print(const T& value)
// {
// 	std::cout << value << std::endl;
// }

// int	main(void)
// {
// 	std::string	str[3] = {
// 		"I-E-A-I-A-I-O",
// 		"why?",
// 		"And we light up the sky"
// 	};
// 	iter(str, 3, print);
// 	return (0);
// }

class Awesome
{
	public:
		Awesome(void): _n(42) {return ;}
		int	get(void) const {return (this->_n);}
	private:
		int	_n;
};

std::ostream& operator<<(std::ostream & o, Awesome const & rhs)
{
	o << rhs.get();
	return o;
}

template< typename T >
void print(T& x)
{
	std::cout << x << std::endl;
	return;
}

int	main(void)
{
	int		tab[] = {0, 1, 2, 3, 4};
	Awesome	tab2[5];

	iter(tab, 5, print<const int>);
	iter(tab2, 5, print<Awesome>);
	return (0);
}
