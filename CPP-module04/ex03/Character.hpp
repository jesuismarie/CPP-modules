#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_

# include "ICharacter.hpp"

class Character : public ICharacter
{
	protected:
		std::string	_name;
		AMateria	*_inventory[4];
	public:
		Character(void);
		Character(std::string const &name);
		Character(Character const &copy);
		~Character(void);
		Character			&operator=(Character const &copy);
		std::string const	&getName(void) const;
		void				setName(std::string const &name);
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif
