#ifndef _ICE_HPP_
# define _ICE_HPP_

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &copy);
		Ice	&operator=(Ice const &copy);
		~Ice(void);
		AMateria	*clone(void) const;
		void		use(ICharacter& target);
};

#endif
