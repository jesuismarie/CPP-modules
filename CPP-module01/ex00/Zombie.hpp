#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void				announce(void);
		const std::string	&get_name(void) const;
		void				set_name(std::string str);
};

#endif
