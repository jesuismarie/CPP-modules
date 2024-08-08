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
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		/*---------------------- Arithmetic operators ----------------------*/
		Fixed	&operator=(Fixed const &other);
		Fixed	operator*(Fixed const &other_num) const;
		Fixed	operator/(Fixed const &other_num) const;
		Fixed	operator+(Fixed const &other_num) const;
		Fixed	operator-(Fixed const &other_num) const;
		/*---------------------- Comparison operators ----------------------*/
		bool	operator>(Fixed const &other_num) const;
		bool	operator<(Fixed const &other_num) const;
		bool	operator>=(Fixed const &other_num) const;
		bool	operator<=(Fixed const &other_num) const;
		bool	operator!=(Fixed const &other_num) const;
		bool	operator==(Fixed const &other_num) const;
		/*------------------ Increment/Decrement operators -----------------*/
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);
		/*--------------------- Static member functions --------------------*/
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(Fixed const &a, Fixed const &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(Fixed const &a, Fixed const &b);
};

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed);

#endif
