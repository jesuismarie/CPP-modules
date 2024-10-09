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
		AMateria(const std::string& type);
		AMateria(const AMateria& copy);
		virtual				~AMateria();
		AMateria&			operator=(const AMateria& other);
		const std::string&	getType(void) const;
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
};

#endif
