#ifndef _CAT_HPP_
# define _CAT_HPP_

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat& copy);
		~Cat();
		Cat&	operator=(const Cat& other);
		void	makeSound(void) const;
};

#endif
