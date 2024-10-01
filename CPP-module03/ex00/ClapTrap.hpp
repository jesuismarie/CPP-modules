#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

# include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoint;
		int			_energy;
		int			_damage;
	public:
		ClapTrap(void);
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& copy);
		~ClapTrap();
		ClapTrap&	operator=(const ClapTrap& other);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif
