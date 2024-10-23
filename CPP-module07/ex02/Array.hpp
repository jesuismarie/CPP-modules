#ifndef _ARRAY_HPP_
# define _ARRAY_HPP_

# include <iostream>

template <class T>
class Array
{
	private:
		T*				arr;
		unsigned int	_length;
	public:
		Array(void);
		Array(unsigned int length);
		Array(const Array& copy);
		Array<T>&		operator=(const Array<T>& other);
		~Array();
		unsigned int	size(void) const;
		T&				operator[](unsigned int idx);
		const T&		operator[](unsigned int idx) const;
};

# include "Array.tpp"

#endif
