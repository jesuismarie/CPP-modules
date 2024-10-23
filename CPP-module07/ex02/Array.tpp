#ifndef _ARRAY_TPP_
# define _ARRAY_TPP_

# include "Array.hpp"

template <typename T>
Array<T>::Array(void): arr(NULL), _length(0) {}

template <typename T>
Array<T>::Array(unsigned int length): _length(length)
{
	arr = new T[_length];
	for (unsigned int i = 0; i < _length; i++)
		arr[i] = T();
}

template <typename T>
Array<T>::Array(const Array& copy)
{
	this->arr = new T[copy._length];

	for (size_t i = 0; i < copy._length; ++i)
		this->arr[i] = copy.arr[i];
	_length = copy._length;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& other)
{
	if (this->arr)
		delete[] this->arr;
	if (this != &other)
	{
		this->arr = new T[other._length];
		for (size_t i = 0; i < other._length; ++i)
			this->arr[i] = other.arr[i];
		_length = other._length;
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	if (this->arr)
		delete[] arr;
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_length);
}

template <typename T>
T&	Array<T>::operator[](unsigned int idx)
{
	if (idx >= this->_length)
		throw std::out_of_range("Invalid index");
	return (this->arr[idx]);
}

template<typename T>
const T&	Array<T>::operator[](unsigned int idx) const
{
	if (idx >= this->_length)
		throw std::out_of_range("Invalid index");
	return (this->arr[idx]);
}

#endif
