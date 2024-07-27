#ifndef _CAT_HPP_
# define _CAT_HPP_

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &copy);
		Cat	&operator=(Cat const &copy);
		~Cat(void);
		void	makeSound(void) const;
};

#endif
