#ifndef _ICE_HPP_
# define _ICE_HPP_

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &copy);
		~Ice(void);
		Ice			&operator=(Ice const &copy);
		AMateria	*clone(void) const;
		void		use(ICharacter& target);
};

#endif
