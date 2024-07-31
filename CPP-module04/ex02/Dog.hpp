#ifndef _DOG_HPP_
# define _DOG_HPP_

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
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
