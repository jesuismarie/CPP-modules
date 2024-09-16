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
		Fixed(const int& value);
		Fixed(const float& value);
		Fixed(const Fixed& copy);
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		/*---------------------- Arithmetic operators ----------------------*/
		Fixed&	operator=(const Fixed& other);
		Fixed	operator*(const Fixed& other_num) const;
		Fixed	operator/(const Fixed& other_num) const;
		Fixed	operator+(const Fixed& other_num) const;
		Fixed	operator-(const Fixed& other_num) const;
		/*---------------------- Comparison operators ----------------------*/
		bool	operator>(const Fixed& other_num) const;
		bool	operator<(const Fixed& other_num) const;
		bool	operator>=(const Fixed& other_num) const;
		bool	operator<=(const Fixed& other_num) const;
		bool	operator!=(const Fixed& other_num) const;
		bool	operator==(const Fixed& other_num) const;
		/*------------------ Increment/Decrement operators -----------------*/
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);
		/*--------------------- Static member functions --------------------*/
		static Fixed&		min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&		max(Fixed& a, Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif
