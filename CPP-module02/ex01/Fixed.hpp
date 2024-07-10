#ifndef _FIXED_HPP_
# define _FIXED_HPP_

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_num;
	static const int	_fract;
public:
	Fixed(void);
	Fixed(const int &value);
	Fixed(const float &value);
	Fixed(Fixed const &copy);
	~Fixed(void);
	Fixed	&operator=(Fixed const &copy);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed);

#endif
