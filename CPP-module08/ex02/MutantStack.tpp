#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>::stack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& copy): std::stack<T>::stack(copy) {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
const MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& other)
{
	if (this != &other)
		this->c = other.c;
	return (*this);
}

#endif
