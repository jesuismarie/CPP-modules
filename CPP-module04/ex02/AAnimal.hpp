#ifndef _AANIMAL_HPP_
# define _AANIMAL_HPP_

# include <iostream>

class AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(const AAnimal& copy);
		virtual				~AAnimal();
		AAnimal&			operator=(const AAnimal& other);
		const std::string&	getType(void) const;
		void				setType(std::string str);
		virtual void		makeSound(void) const = 0;
	};

#endif
