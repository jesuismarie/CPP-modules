#ifndef _MATERIASOURCE_HPP_
# define _MATERIASOURCE_HPP_

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		AMateria	*_inventory[4];
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &copy);
		~MateriaSource(void);
		MateriaSource	&operator=(MateriaSource const &copy);
		void			learnMateria(AMateria *m);
		AMateria		*createMateria(std::string const &type);
};

#endif
