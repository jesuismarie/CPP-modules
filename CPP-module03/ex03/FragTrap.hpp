#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &copy);
		FragTrap	&operator=(FragTrap const &copy);
		virtual		~FragTrap(void);
		void		highFivesGuys(void);
};

#endif
