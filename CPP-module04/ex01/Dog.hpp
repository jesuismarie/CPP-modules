#ifndef _DOG_HPP_
# define _DOG_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		Dog(void);
		Dog(Dog const &copy);
		~Dog(void);
		Dog		&operator=(Dog const &copy);
		Brain	*getBrain(void) const;
		void	makeSound(void) const;
};

#endif
