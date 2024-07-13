#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

# include <iostream>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string	&getType(void) const;
		void				setType(std::string str);
};

#endif
