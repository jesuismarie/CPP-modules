#ifndef _CAT_HPP_
# define _CAT_HPP_

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain*	brain;
	public:
		Cat(void);
		Cat(const Cat& copy);
		~Cat();
		Cat&	operator=(const Cat& other);
		Brain*	getBrain(void) const;
		void	makeSound(void) const;
};

#endif
