#ifndef _HARL_HPP_
# define _HARL_HPP_

# include <iostream>

# define YELLOW "\e[0;33m"
# define GREEN "\033[0;32m"
# define ORANGE "\033[38;5;208m"
# define RESET "\e[0m"

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif