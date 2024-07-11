#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanB(std::string name);
	~HumanB(void);
	void		setWeapon(Weapon &type);
	void		attack(void) const;
};
