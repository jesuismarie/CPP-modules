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
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& copy);
		~DiamondTrap();
		DiamondTrap&	operator=(const DiamondTrap& other);
		void		whoAmI(void);
		void		attack(const std::string& target);
};

#endif
