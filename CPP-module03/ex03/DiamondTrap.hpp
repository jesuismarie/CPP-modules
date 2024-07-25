#ifndef _DIAMONDTRAP_HPP_
# define _DIAMONDTRAP_HPP_

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string const &name);
		DiamondTrap(DiamondTrap const &copy);
		DiamondTrap	&operator=(DiamondTrap const &copy);
		~DiamondTrap(void);
		void		whoAmI(void);
		void		attack(std::string const &target);
};

#endif
