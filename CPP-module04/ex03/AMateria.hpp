#ifndef _AMATERIA_HPP
# define _AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &copy);
		virtual				~AMateria(void);
		AMateria			&operator=(AMateria const &copy);
		std::string const	&getType(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter& target);
};

#endif
