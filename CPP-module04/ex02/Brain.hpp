#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

#include <iostream>

class Brain
{
	private:
		std::string	idea[100];
	public:
		Brain(void);
		Brain(Brain const &copy);
		~Brain(void);
		Brain				&operator=(Brain const &copy);
		const std::string	&getIdea(int index) const;
		void				setIdea(std::string idea, int index);
};

#endif
