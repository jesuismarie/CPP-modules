#ifndef _FIXED_HPP_
# define _FIXED_HPP_

# include <iostream>

class Fixed
{
	private:
		int					_num;
		static const int	_fract;
	public:
		Fixed(void);
		Fixed(Fixed const &copy);
		~Fixed(void);
		Fixed	&operator=(Fixed const &other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
