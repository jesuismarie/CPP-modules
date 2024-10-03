#ifndef _DOG_HPP_
# define _DOG_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	brain;
	public:
		Dog(void);
		Dog(const Dog& copy);
		~Dog();
		Dog&	operator=(Dog const& other);
		Brain*	getBrain(void) const;
		void	makeSound(void) const;
};

#endif
