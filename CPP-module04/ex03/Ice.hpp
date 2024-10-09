#ifndef _ICE_HPP_
# define _ICE_HPP_

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& copy);
		~Ice();
		Ice&		operator=(const Ice& other);
		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
