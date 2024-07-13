#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon		&weapon;
	public:
		HumanA(std::string name, Weapon &type);
		~HumanA(void);
		void		setWeapon(Weapon type);
		void		attack(void) const;
};
