#ifndef _WRONGCAT_HPP_
# define _WRONGCAT_HPP_

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& wrongCat);
		~WrongCat();
		WrongCat&	operator=(const WrongCat& other);
		void		makeSound(void) const;
};

#endif
