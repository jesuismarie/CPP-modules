#ifndef _DOG_HPP_
# define _DOG_HPP_

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog& copy);
		~Dog();
		Dog&	operator=(const Dog& other);
		void	makeSound(void) const;
};

#endif
