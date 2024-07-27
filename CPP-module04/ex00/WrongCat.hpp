#ifndef _WRONGCAT_HPP_
# define _WRONGCAT_HPP_

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &wrongCat);
		~WrongCat(void);
		void		makeSound(void) const;
		WrongCat	&operator=(const WrongCat &wrongCat);
};

#endif
