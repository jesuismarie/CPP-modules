#ifndef _DOG_HPP_
# define _DOG_HPP_

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &copy);
		Dog	&operator=(Dog const &copy);
		~Dog(void);
		void	makeSound(void) const;
};

#endif
