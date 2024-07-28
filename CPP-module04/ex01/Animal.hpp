#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

# include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const &copy);
		Animal	&operator=(Animal const &copy);
		virtual	~Animal(void);
		const	std::string	&getType(void) const;
		void	setType(std::string str);
		virtual void	makeSound(void) const;
	};

#endif
