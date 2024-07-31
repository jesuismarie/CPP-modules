#ifndef _CURE_HPP_
# define _CURE_HPP_

# include "AMateria.hpp"
# include "ICharacter.hpp"

class ICharacter;

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &copy);
		~Cure(void);
		Cure		&operator=(Cure const &copy);
		AMateria	*clone(void) const;
		void		use(ICharacter& target);
};

#endif
