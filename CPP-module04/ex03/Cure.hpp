#ifndef _CURE_HPP_
# define _CURE_HPP_

# include "AMateria.hpp"
# include "ICharacter.hpp"

class ICharacter;

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& copy);
		~Cure();
		Cure&		operator=(const Cure& other);
		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
