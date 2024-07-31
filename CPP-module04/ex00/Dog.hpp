#ifndef _DOG_HPP_
# define _DOG_HPP_

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &copy);
		~Dog(void);
		Dog		&operator=(Dog const &copy);
		void	makeSound(void) const;
};

#endif
