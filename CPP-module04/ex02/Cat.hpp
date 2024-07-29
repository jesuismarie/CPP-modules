#ifndef _CAT_HPP_
# define _CAT_HPP_

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(Cat const &copy);
		Cat	&operator=(Cat const &copy);
		~Cat(void);
		void	makeSound(void) const;
};

#endif
