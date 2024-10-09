#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_

# include "ICharacter.hpp"

class Character : public ICharacter
{
	protected:
		std::string	_name;
		AMateria*	_inventory[4];
		bool		inInventory(AMateria* m);
	public:
		Character(void);
		Character(std::string const &name);
		Character(const Character& copy);
		~Character();
		Character&			operator=(const Character& other);
		const std::string&	getName(void) const;
		void				setName(std::string name);
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
